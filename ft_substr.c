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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == 0)
		return (0);
	i = 0;
	while (s[start+i] != '\0' && i < len)
	{
		res[i] = s[start+i];
		i++;
	}
	res[i] = '\0';
	return (res);	
}
int	main(void)
{
	char *res;
	char *s = "First word removed..";
	
	res = ft_substr(s, 5, 15);
	printf("%s\n", res);
}
