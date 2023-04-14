/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:39:17 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/12 12:39:26 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	char b;
	
	c = 'b';
	b = '9';
	
	if (isdigit(c) == 0)
	printf("function: %c is not a digit.\n", c);
	else
	printf("function: %c is a digit.\n", c);
	
	if (ft_isdigit(c) == 0)
	printf("ft_function: %c is not a digit.\n", c);
	else
	printf("ft_function: %c is a digit.\n", c);
        
        if (isdigit(b) == 0)
        printf("function: %c is not a digit.\n", b);
        else
        printf("function: %c is a digit.\n", b);
        
        if (ft_isdigit(b) == 0)
	printf("ft_function: %c is not a digit.\n", b);
	else
	printf("ft_function: %c is a digit.\n", b);
        
        return 0;
}
