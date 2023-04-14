/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:01:37 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/13 10:01:55 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	const char	*mark;
	
	i = ft_strlen(s);
	mark = s;
	s = s + i;
	while (*mark != *s && *s != c)
		s--;
	if (*s == c)
		return ((char *)s);
	return (0);
}
#include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "Let's.test.the.strrchr"; 
   const char ch = '.'; 
   char *p, *p2;
   p = strrchr(str, ch);
   printf("Orig strrchr: String starting from %c is: %s\n", ch, p);
   p2 = ft_strrchr(str, ch);
   printf("ft_strrchr: String starting from %c is: %s\n", ch, p2);
   return 0;
}
