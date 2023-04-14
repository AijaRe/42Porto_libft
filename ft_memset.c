/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:40:16 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/12 12:40:22 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n != 0)
	{
		*(unsigned char *)s = (unsigned char) c;
		s++;
		n--;
	}
	return s;
}
#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is original function");
   puts(str);

   memset(str,'$',7*sizeof(char));
   puts(str);
   
   char str2[50];

   strcpy(str2,"This is ft_function");
   puts(str2);

   ft_memset(str2,'$',7*sizeof(char));
   puts(str2);
   
   return(0);
}
