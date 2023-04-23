char	**ft_split(char const *s, char c);

int	main(void)
{
	char	**result;
	int	i = 0;

	char *test = "test the string";
	result = ft_split(test, ' ');
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
