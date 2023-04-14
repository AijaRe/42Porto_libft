/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:13:21 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/13 09:13:30 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (nptr[i] - '0');
		i++;
	}
	if (sign == -1)
		return (-nb);
	return (nb);
}
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s = "   -1234ab567";
	printf("atoi: %d\n", atoi(s));
	printf("ft_atoi: %d\n", ft_atoi(s));
	char	*s1 = "   +1234ab567";
	printf("atoi: %d\n", atoi(s1));
	printf("ft_atoi: %d\n", ft_atoi(s1));
	char	*s2 = "   -+--1234ab567";
	printf("atoi: %d\n", atoi(s2));
	printf("ft_atoi: %d\n", ft_atoi(s2));
}

