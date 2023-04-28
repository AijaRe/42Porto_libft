void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*not functional, works only every 2nd character*/
void	ft_strupcase(unsigned int i, char *str)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
}
int	main(void)
{
	char	str[] = "counttheiter";
	printf("before: %s\n", str);
	ft_striteri(str, ft_strupcase);
	printf("after: %s\n", str);
	return (0);
}
