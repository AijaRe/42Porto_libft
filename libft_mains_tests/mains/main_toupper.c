int	ft_toupper(int c);

#include <ctype.h>
#include <stdio.h>

int main()
{
    char a;

    a = 'g';
    printf("original function: %c in uppercase is %c\n",
           a, toupper(a));
    printf("ft_function: %c in uppercase is %c\n",
           a, ft_toupper(a));

    return 0;
}
