/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 09:52:48 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/14 09:52:51 by arepsa           ###   ########.fr       */
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
char	*ft_strdup(const char *s)
{
	char	*s2;
	int	len;
	int	i;
	
	len = ft_strlen(s);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (s2 == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);	
}

int main()
{
    char orig_str[12] = "Itsy bitsy!";
    char *dup_str;
    int o_len,d_len;

    dup_str = ft_strdup(orig_str);
    o_len = strlen(orig_str);
    d_len = strlen(dup_str);

    printf("Original String: '%s' (%d)\n",
            orig_str,o_len);
    printf("Duplicate string: '%s' (%d)\n",
            dup_str,d_len);

    return(0);
}
