/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:05:05 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/14 16:05:07 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates with malloc and returns a substring from the string ’s’*/
/*substring begins at index ’start’ and is of max size ’len*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
