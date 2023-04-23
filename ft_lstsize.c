/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:22:24 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/23 12:23:08 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Count the nb of nodes in he list*/
/*lst - head(beginning) of the list*/
/*Return length of the list*/

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*int	main()
{
	t_list	*head = NULL;
	t_list	*new;
	int		i = 0;

	while (i < 10)
	{
		new = ft_lstnew((int *)&i);
		new->next = head;
		head = new;
		i++;
	}
printf("Size should be 10: %d\n", ft_lstsize(head));
	return (0);
}*/
