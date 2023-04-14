/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 08:50:47 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/13 08:53:41 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
#include <ctype.h>
#include <stdio.h>
 
int main()
{
    char a;
 
    a = 'g';
    printf("original function: %c in uppercase is %c\n",
           a, toupper(a));
    printf("ft_function: %c in uppercase is %c\n",
           a, ft_toupper(a));
 
    return 0;
}
