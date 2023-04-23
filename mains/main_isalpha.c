int	ft_isalpha(int c);

#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	char b;

	c = 'b';
	b = '9';

	if (isalpha(c) == 0)
	printf("function: %c is not an alphabet.\n", c);
	else
	printf("function: %c is an alphabet.\n", c);

	if (ft_isalpha(c) == 0)
	printf("ft_function: %c is not an alphabet.\n", c);
	else
	printf("ft_function: %c is an alphabet.\n", c);

        if (isalpha(b) == 0)
        printf("function: %c is not an alphabet.\n", b);
        else
        printf("function: %c is an alphabet.\n", b);

        if (ft_isalpha(b) == 0)
	printf("ft_function: %c is not an alphabet.\n", b);
	else
	printf("ft_function: %c is an alphabet.\n", b);

        return 0;
}
