/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:00:12 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/13 09:00:24 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

#include <ctype.h>
#include <stdio.h>
 
int main()
{
    char a;
 
    a = 'G';
    printf("original function: %c in lowercase is %c\n",
           a, tolower(a));
    printf("ft_function: %c in lowercase is %c\n",
           a, ft_tolower(a));
 
    return 0;
}
