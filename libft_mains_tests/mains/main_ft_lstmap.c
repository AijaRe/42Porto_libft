t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

void	*double_int(void *content)
{
	int	*ptr;

	ptr = (int *)content;
	if (!ptr)
		return (NULL);
	*ptr = *ptr * 2;
	return (ptr);
}


void	del_int(void *content)
{
	int	*ptr;

	ptr = (int *)content;
	if (ptr)
		free(ptr);
}

int	main(void)
{
	t_list	*list;
	t_list	*new_list;
	int	*num1;
	int	*num2;
	int	*num3;

	num1 = (int *)malloc(sizeof(int));
	num2 = (int *)malloc(sizeof(int));
	num3 = (int *)malloc(sizeof(int));
	*num1 = 10;
	*num2 = 20;
	*num3 = 30;
	list = ft_lstnew(num1);
	ft_lstadd_back(&list, ft_lstnew(num2));
	ft_lstadd_back(&list, ft_lstnew(num3));
	new_list = ft_lstmap(list, double_int, del_int);
	while (new_list)
	{
		printf("%d ", *(int *)(new_list->content));
		new_list = new_list->next;
	}
	ft_lstclear(&list, del_int);
	ft_lstclear(&new_list, del_int);
	return (0);
}
