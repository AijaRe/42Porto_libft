void	*ft_calloc(size_t nmemb, size_t size);

int main()
{
    int *p, i, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    p = (int*)calloc(n, sizeof(int));

    if(p==NULL)
    {
        printf("Memory allocation failed");
        exit(1); // exit the program
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i);
        scanf("%d", p+i);
    }
    printf("\nprinting array of %d integers\n\n", n);

    // calculate sum

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p+i));
    }
    // signal to operating system program ran fine
    return 0;
}
