int	ft_isdigit(int c);

#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	char b;

	c = 'b';
	b = '9';

	if (isdigit(c) == 0)
	printf("function: %c is not a digit.\n", c);
	else
	printf("function: %c is a digit.\n", c);

	if (ft_isdigit(c) == 0)
	printf("ft_function: %c is not a digit.\n", c);
	else
	printf("ft_function: %c is a digit.\n", c);

        if (isdigit(b) == 0)
        printf("function: %c is not a digit.\n", b);
        else
        printf("function: %c is a digit.\n", b);

        if (ft_isdigit(b) == 0)
	printf("ft_function: %c is not a digit.\n", b);
	else
	printf("ft_function: %c is a digit.\n", b);

        return 0;
}
