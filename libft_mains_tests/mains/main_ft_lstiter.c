void	ft_lstiter(t_list *lst, void (*f)(void *));

void	ft_strupcase(char *c)
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
}
