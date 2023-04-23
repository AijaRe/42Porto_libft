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

/*searches for the last occurrence of the character in the string*/
/*s[i] -> end of string*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0 && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
