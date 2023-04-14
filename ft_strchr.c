/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:30:27 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/13 09:31:09 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}
#include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "Let's.test.the.strchr"; 
   const char ch = '.'; 
   char *p, *p2;
   p = strchr(str, ch);
   printf("Orig strchr: String starting from %c is: %s\n", ch, p);
   p2 = ft_strchr(str, ch);
   printf("ft_strchr: String starting from %c is: %s\n", ch, p2);
   return 0;
}
