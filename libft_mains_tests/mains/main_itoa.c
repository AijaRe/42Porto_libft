char	*ft_itoa(int n);

#include <stdio.h>

int	main(void)
{
	int	a = 123;
	printf("ft_itoa 123: %s\n", ft_itoa(a));
	int	b = -10;
	printf("ft_itoa -10: %s\n", ft_itoa(b));
	int	c = 0;
	printf("ft_itoa 0: %s\n", ft_itoa(c));
}
