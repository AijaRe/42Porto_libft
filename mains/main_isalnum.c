int	ft_isalnum(int c);

#include <stdio.h>
#include <ctype.h>
int main()
{
	char a;
	char c;
	char b;

	a = '\t';
	c = 'b';
	b = '9';

		if (isalnum(a) == 0)
	printf("function: %c is not alphanumeric.\n", a);
	else
	printf("function: %c is alphanumeric.\n", a);

	if (ft_isalnum(a) == 0)
	printf("ft_function: %c is not alphanumeric.\n", a);
	else
	printf("ft_function: %c is alphanumeric.\n", a);

	if (isalnum(c) == 0)
	printf("function: %c is not alphanumeric.\n", c);
	else
	printf("function: %c is alphanumeric.\n", c);

	if (ft_isalnum(c) == 0)
	printf("ft_function: %c is not alphanumeric.\n", c);
	else
	printf("ft_function: %c is alphanumeric.\n", c);

        if (isalnum(b) == 0)
        printf("function: %c is not alphanumeric.\n", b);
        else
        printf("function: %c is alphanumeric.\n", b);

        if (ft_isalnum(b) == 0)
	printf("ft_function: %c is not alphanumeric.\n", b);
	else
	printf("ft_function: %c is alphanumeric.\n", b);

        return 0;
}
