void	ft_lstadd_front(t_list **lst, t_list *new);

int    main(void)
{
    t_list	*head = NULL;
    t_list	*node1 = ft_lstnew("node-1");
    t_list	*new = ft_lstnew("Last goes first");
    t_list	*current;
    
    ft_lstadd_front(&head, node1);
    current = head;
    printf("Before: ");
     while (current != NULL)
    {
        printf("%s ", (char *)current->content);
        current = current->next; 
    }
    printf("\n");
    ft_lstadd_front(&head, new);
    current = head;
    printf("After: ");
    while (current != NULL)
    {
        printf("%s ", (char *)current->content);
        current = current->next; 
    }
    free(head);
    return (0);
}
