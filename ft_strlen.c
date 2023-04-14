/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:37:18 by arepsa            #+#    #+#             */
/*   Updated: 2023/03/14 15:18:45 by arepsa           ###   ########.fr       */
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
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="12345";
    printf("String is %s\n", a);
    // using the %zu format specifier to print size_t
    printf("Function: Length of string a = %zu \n",strlen(a));
    printf("Ft_function: Length of string b = %zu \n",ft_strlen(a));

    return 0;
}
