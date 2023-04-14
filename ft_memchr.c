/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:15:46 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/13 12:15:48 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;
	
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		return ((void *)&str[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "Let's.test.the.strchr"; 
   const char ch = '.'; 
   char *p, *p2;
   p = memchr(str, ch, strlen(str));
   printf("Orig strchr: String starting from %c is: %s\n", ch, p);
   p2 = ft_memchr(str, ch, strlen(str));
   printf("ft_strchr: String starting from %c is: %s\n", ch, p2);
   return 0;
}
