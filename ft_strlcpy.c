/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:58:34 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/12 16:01:05 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>

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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	if (!dst || !src)
		return (0);
	src_size = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_size);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	size_t	src_size;
	size_t	src_size2;
	char 	*src;
	char	*src2;
	char 	*dest;
	char	*dest2;

	src = calloc(11, sizeof(char));
	dest = calloc(8, sizeof(char));
	src = "alo galera";
	src_size = strlcpy(dest, src, 8);
	printf("src orig: %s\n", src);
	printf("dest orig: %s\n", dest);
	printf("src_size orig: %zu\n", src_size);
	
	src2 = calloc(11, sizeof(char));
	dest2 = calloc(8, sizeof(char));
	src2 = "alo galera";
	src_size2 = ft_strlcpy(dest2, src2, 8);
	printf("src ft: %s\n", src2);
	printf("dest ft: %s\n", dest2);
	printf("src_size ft: %zu\n", src_size2);
	return(0);
}
