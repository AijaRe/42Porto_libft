/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:28:18 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/19 18:09:19 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string with malloc resulting
from successive applications of ’f’.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			res[i] = (*f)(i, s[i]);
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}
/*char char_plus(unsigned int i, char c) {
    return c + 1;
}

int main() {
    char *input = "hello";
    char *result = ft_strmapi(input, &char_plus);
    printf("Input string: %s\n", input);
    printf("Result string: %s\n", result);
    free(result);
    return 0;
}*/
/*#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

char	mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int		main(int argc, const char *argv[])
{
	char	*str;
	char	*strmapi;

	alarm(5);
	str = (char *)malloc(sizeof(*str) * 12);
	if (argc == 1 || !str)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		strcpy(str, "LoReM iPsUm");
		strmapi = ft_strmapi(str, &mapi);
		ft_print_result(strmapi);
		if (strmapi == str)
			ft_print_result("\nA new string was not returned");
		if (strmapi[11] != '\0')
			ft_print_result("\nString is not null terminated");
	}
	return (0);
}*/
