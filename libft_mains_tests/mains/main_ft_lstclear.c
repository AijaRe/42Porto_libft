void	ft_lstclear(t_list **lst, void (*del)(void*));

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
