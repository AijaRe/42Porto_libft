void	*ft_calloc(size_t nmemb, size_t size);

int main(void)
{
    int *arr;
    size_t n = 5;
    size_t s = sizeof(int);

    arr = (int *)ft_calloc(n, s);
    if (arr == NULL) {
        printf("Error: memory allocation failed\n");
        return 1;
    }
	/* Check if the memory was set to 0 */
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (size_t i = 0; i < n; i++) {
        if (arr[i] != 0) {
            printf("\nError: memory not set to 0\n");
            return 1;
        }
    }
    free(arr);
    return 0;
}
