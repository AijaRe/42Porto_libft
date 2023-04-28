void	ft_lstdelone(t_list *lst, void (*del)(void*));

void del_int(void *ptr)
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
}
