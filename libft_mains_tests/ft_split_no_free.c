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

/*while not the end of string and separator is not found..*/
/*..iterate over the word*/
/*when there is a new word and separator is found or it's the end..*/
/*..move general index to this position, start new word index..*/
/*..and register string number*/
static int	count_strs(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	strs;

	i = 0;
	j = 0;
	strs = 0;
	while (s[i] != '\0')
	{
		while (s[i + j] != '\0' && s[i + j] != c)
			j++;
		if (j > 0)
		{
			i = i + j;
			j = 0;
			strs++;
		}
		else
			i++;
	}
	return (strs);
}

/*if - condition to write start of the string*/
/*keeps iterating until finds new separator or end of string*/
/*when the condition above is true, outputs string*/
static void	sep_strs(char const *s, char c, char **new)
{
	size_t	i;
	size_t	j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			new[j] = ft_substr(s, start, i - start);
			j++;
			start = -1;
		}
		i++;
	}
}

/*allocate memory for pointers to each new string*/
/*ft condition: add last NULL string*/
char	**ft_split(char const *s, char c)
{
	char	**new;
	int		str_nb;

	str_nb = count_strs(s, c);
	new = malloc(sizeof(char *) * (str_nb + 1));
	if (!new)
		return (NULL);
	sep_strs(s, c, new);
	new[str_nb] = NULL;
	return (new);
}
/*int	main(void)
{
	char	**result;
	int	i = 0;

	char *test = "  test the string";
	result = ft_split(test, ' ');
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/