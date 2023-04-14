/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:51:48 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/14 15:51:50 by arepsa           ###   ########.fr       */
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
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (0);
}
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
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int	i;
	int	j;
	
	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != 0)
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j]) != 0 && j > i)
		j--;
	res = (char *)malloc(sizeof(char) * (j - i + 1));
	res = ft_substr(s1, i, j - i + 1);
	return (res);
}
int	main(void)
{
	printf("%s\n", ft_strtrim("123abcde21", "231"));
}
