/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:29:49 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/12 09:31:19 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}


#include <stdio.h>
#include <ctype.h>
 
int main(void)
{
   int ch;
 
   for (ch = 124; ch <= 130; ch++) {
      printf("%d    ", ch);
      if (isascii(ch))
         printf("Function: The character is %c\n", ch);
      else
         printf("Function: Cannot be represented by an ASCII character\n");
   }
   for (ch = 124; ch <= 130; ch++) {
      printf("%d    ", ch);
      if (ft_isascii(ch))
         printf("Ft_function: The character is %c\n", ch);
      else
         printf("Ft_function: Cannot be represented by an ASCII character\n");
   }
   return 0;
}
