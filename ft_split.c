/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:34:27 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/14 17:34:30 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**new;
	int	i;
	int	x;
	int	y;
	
	i = 0;
	x = 0;
	y = 0;
	while (s[i] != '\0')
	{
		if(s[i] == c)
		{
			new[x][y] = '\0';
			x++;
			y = 0;
		}
		else
		{
			new[x][y] = s[i];
			y++;
		}
		i++;
	}
	return (new);		
}

int	main(void)
{
	char	**result;
	int	i = 0;
	
	char *test = "test of string";
	result = ft_split(test, ' ');
	while (result[i] != '\0')
	{
		printf("%s\n", result[i]);
		i++;
	}
}
