/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:38:25 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/12 12:38:43 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'b')||(c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}


#include <stdio.h>
#include <ctype.h>
int main()
{
	char a;
	char c;
	char b;
	
	a = '\t';
	c = 'b';
	b = '9';
	
		if (isalnum(a) == 0)
	printf("function: %c is not alphanumeric.\n", a);
	else
	printf("function: %c is alphanumeric.\n", a);
	
	if (ft_isalnum(a) == 0)
	printf("ft_function: %c is not alphanumeric.\n", a);
	else
	printf("ft_function: %c is alphanumeric.\n", a);
	
	if (isalnum(c) == 0)
	printf("function: %c is not alphanumeric.\n", c);
	else
	printf("function: %c is alphanumeric.\n", c);
	
	if (ft_isalnum(c) == 0)
	printf("ft_function: %c is not alphanumeric.\n", c);
	else
	printf("ft_function: %c is alphanumeric.\n", c);
        
        if (isalnum(b) == 0)
        printf("function: %c is not alphanumeric.\n", b);
        else
        printf("function: %c is alphanumeric.\n", b);
        
        if (ft_isalnum(b) == 0)
	printf("ft_function: %c is not alphanumeric.\n", b);
	else
	printf("ft_function: %c is alphanumeric.\n", b);
        
        return 0;
}
