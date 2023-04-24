/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 08:38:35 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/24 08:39:14 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Deletes and frees the given node and every successor
 of that node, using the function ’del’ and free.
The pointer to the list must be set to NULL*/
/*lst - address of a pointer to a node.
del - address of the function used to delete
the content of the node*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list 	*curr;

	if (!lst)	
		return ;
	curr = *lst;
	while (curr)
	{
		*lst = curr->next;  // update lst to point to the next node
		(*del)(curr->content);
		free(curr);
		curr = *lst; //update curr to point to the next node
	}
	*lst = NULL;
}
void del_int(void *ptr)
{
    int *int_ptr = (int *)ptr;
    free(int_ptr);
}
int main(void)
{
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->content) = 1;

    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->content) = 2;

    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->next->content) = 3;

    printf("Before clear:\n");
    while (lst)
    {
        printf("%d\n", *(int *)(lst->content));
        lst = lst->next;
    }

    lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)(lst->content) = 1;

    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->content) = 2;

    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->next->content) = 3;

    ft_lstclear(&lst, del_int);

    printf("After clear:\n");
    if (!lst)
        printf("List cleared successfully!\n");

    return (0);
}
