char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char *res;
	char *s = "First word removed..";

	res = ft_substr(s, 5, 15);
	printf("%s\n", res);
}
