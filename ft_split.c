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
/*return an array of strings obtained by splitting ’s’*/ 
/*use the character ’c’ as a delimiter*/
/*array must end with a NULL pointer*/
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
static void	sep_strs(char const *s, char c, char **new)
{
	int	i;
	int	j;
	int	a;
	
	i = 0;
	j = 0;
	a = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			new[a] = ft_substr(s, j, i - j);
			{
			a++;
			j = i + 1;
			}
		}
		i++;
	}
	if (j < i)
	{
		new[a] = ft_substr(s, j, i - j);
		a++;
	}
}
char	**ft_split(char const *s, char c)
{
	char	**new;
	int	str_nb;
	int	i;
	int	j;
	int	a;
	
	str_nb = count_strs(s, c);
	new = malloc(sizeof(char *) * (str_nb + 1));
	if (!new)
		return NULL;
	sep_strs(s, c, new);
	new[str_nb + 1] = NULL;
	return (new);		
}

int	main(void)
{
	char	**result;
	int	i = 0;
	
	char *test = "test the string";
	result = ft_split(test, ' ');
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}

