/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:23:01 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/11 14:32:27 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'b')||(c >= 'A' && c <= 'Z'))
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
	
	if (isalpha(c) == 0)
	printf("function: %c is not an alphabet.\n", c);
	else
	printf("function: %c is an alphabet.\n", c);
	
	if (ft_isalpha(c) == 0)
	printf("ft_function: %c is not an alphabet.\n", c);
	else
	printf("ft_function: %c is an alphabet.\n", c);
        
        if (isalpha(b) == 0)
        printf("function: %c is not an alphabet.\n", b);
        else
        printf("function: %c is an alphabet.\n", b);
        
        if (ft_isalpha(b) == 0)
	printf("ft_function: %c is not an alphabet.\n", b);
	else
	printf("ft_function: %c is an alphabet.\n", b);
        
        return 0;
}
