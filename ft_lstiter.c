/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:14:02 by arepsa            #+#    #+#             */
/*   Updated: 2023/04/24 10:14:31 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*applies the function ’f’ on the content of each node of lst*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*void	ft_strupcase(char *c)
{
	while (*c)
	{
			if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
			
		}
		c++;
	}
}
int	main(void)
{
	char	str[] = "counttheiter";
	char	str2[] = "second node";
	t_list *lst;
	t_list *new_node;
	t_list *new_node2;

	lst = new_node;
	new_node = ft_lstnew(str);
	new_node2 = ft_lstnew(str2);
	new_node->next = new_node2;
	lst = new_node;

	printf("before: %s\n", str);
	printf("before: %s\n", str2);
	ft_lstiter(lst, (void *)ft_strupcase);
	printf("after: %s\n", (char *)new_node->content);
	printf("after: %s\n", (char *)new_node2->content);
	return (0);
}*/