/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:14:34 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/23 13:15:12 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Return the last node of the list.*/
/*lst - head(beginning) of the list*/
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;	
	return (lst);
}
int	main()
{
	t_list	*head = NULL;
	t_list	*new;
	int		i = 0;

	while (i < 10)
	{
		int *content = (int *)malloc(sizeof(int));
		*content = i;
		new = ft_lstnew(content);
		new->next = head;
		head = new;
		i++;
	}
printf("Last should be 9: %d\n", *(int*)ft_lstlast(head)->content);
	return (0);
}
