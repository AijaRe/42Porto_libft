/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:20:54 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/13 14:21:30 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;
	
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		}
	i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>
int main ()
{
    int res;
    int ft_res;
    char s1[] = "Hello";
    char s2[] = "Helloworld";
    res = memcmp(s1, s2, 5);
    if(res > 0)
    {
        printf("orig memcmp: s2 is less than s1\n");
    }
    else if(res < 0)
    {
        printf("orig memcmp: s1 is less than s2\n");
    }
    else if (res == 0)
    {
        printf("orig memcmp: s1 is equal to s2\n");
    }
    ft_res = ft_memcmp(s1, s2, 5);
    if(ft_res > 0)
    {
        printf("orig memcmp: s2 is less than s1\n");
    }
    else if(ft_res < 0)
    {
        printf("orig memcmp: s1 is less than s2\n");
    }
    else if (ft_res == 0)
    {
        printf("orig memcmp: s1 is equal to s2\n");
    }
    return 0;
}
