/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:35:31 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/20 13:35:55 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Add the node ’new’ at the beginning of the list.*/
/*lst - address of a pointer to the first link of a list.*/
/*new - link to add at the beginning of the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
	        return ;
	new->next = *lst;
	*lst = new;
}
int    main(void)
{
    t_list	*head;
    t_list	*new;
    
    new = ft_lstnew("Last goes first");
    ft_lstadd_front(&head, new);
    printf("head.content: %s\n", (char *)head->content);
    printf("new.content: %s\n", (char *)new->content);
    return (0);
}

