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

/*returns a pointer to the first occurrence of character in the string*/
/*if looking for \0 , returns pointer to the null char*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}
