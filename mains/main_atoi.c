int	ft_atoi(const char *nptr);

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*s = "   -1234ab567";
	printf("atoi: %d\n", atoi(s));
	printf("ft_atoi: %d\n", ft_atoi(s));
	char	*s1 = "   +1234ab567";
	printf("atoi: %d\n", atoi(s1));
	printf("ft_atoi: %d\n", ft_atoi(s1));
	char	*s2 = "   -+--1234ab567";
	printf("atoi: %d\n", atoi(s2));
	printf("ft_atoi: %d\n", ft_atoi(s2));
}
