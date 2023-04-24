/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:59:17 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/24 07:59:57 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Add the node ’new’ at the end of the list.*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	last = ft_lstlast(*lst);
	last->next = new;
}
/*int main()
{
	t_list	*head;
    t_list	*new;
    
	head = ft_lstnew("I am head");
    new = ft_lstnew("Last goes last");
    ft_lstadd_back(&head, new);
    printf("head.content: %s\n", (char *)head->content);
    printf("new.content: %s\n", (char *)new->content);
    return (0);
}*/