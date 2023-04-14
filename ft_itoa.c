/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:19:41 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/14 14:19:45 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(n)
{
	int	length;
	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length++;
	while (n)
	{
		n = n / 10;
		length++;
	}
	return (length);
}
char	*ft_itoa(int n)
{
	char	*res;
	int	len;
	int	i;
	
	len = ft_length(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == 0)
		return (0);
	i = 0;
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	res[len] = '\0';
	while (n != 0)
	{
		res[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (res);	
}
#include <stdio.h>

int	main(void)
{
	int	a = 123;
	printf("ft_itoa 123: %s\n", ft_itoa(a));
	int	b = -10;
	printf("ft_itoa -10: %s\n", ft_itoa(b));
	int	c = 0;
	printf("ft_itoa 0: %s\n", ft_itoa(c));
}
