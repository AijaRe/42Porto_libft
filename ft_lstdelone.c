/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 08:11:37 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/24 08:12:19 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*lst - the node to free*/
/*frees the memory of the node’s content..*/
/*..using the function ’del’ given as a parameter..*/
/*..and free the node. The memory of ’next’ must not be freed.*/
/*(lt->content implicitly cast to void*)*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)	
		return ;
	(*del)(lst->content);
	free(lst);
}
/*void del_int(void *ptr)
{
    int *int_ptr = (int *)ptr;
    free(int_ptr);
}
int	main(void)
{
	t_list	*new;
	int		*ptr;
	
	ptr = malloc(sizeof(int));
	*ptr = 42;
	new = ft_lstnew(ptr);
	printf("before delete: %d\n", *(int *)new->content);
	ft_lstdelone(new, del_int);
	printf("after delete: %d\n", *(int *)new->content);
	return (0);
}*/