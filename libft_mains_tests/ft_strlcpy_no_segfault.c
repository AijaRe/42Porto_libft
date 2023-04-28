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

#include "libft.h"

/*copy up to size-1 characters and NUL-terminate*/
/*return the total length of the string possible to create (src length)*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
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
	return (src_len);
}
/*#include <string.h>
#include <stdlib.h>
int	main(void)
{
	size_t	src_size2;
	char	*src2;
	char	*dest2;

	src2 = calloc(11, sizeof(char));
	dest2 = calloc(8, sizeof(char));
	src2 = "ahoi, bebr";
	src_size2 = ft_strlcpy(dest2, src2, 8);
	printf("src ft: %s\n", src2);
	printf("dest ft: %s\n", dest2);
	printf("src_size ft: %zu\n", src_size2);
	return(0);
}*/
