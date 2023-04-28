t_list	*ft_lstlast(t_list *lst);

int	main()
{
	t_list	*head = NULL;
	t_list	*new;
	int		i = 5;

	while (i < 10)
	{
		int *content = (int *)malloc(sizeof(int));
		*content = i;
		new = ft_lstnew(content);
		ft_lstadd_back(&head, new);
		i++;
	}
printf("Last should be 9: %d\n", *(int*)ft_lstlast(head)->content);
	return (0);
}
