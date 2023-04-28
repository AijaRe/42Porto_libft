int	ft_tolower(int c);

#include <ctype.h>
#include <stdio.h>

int main()
{
    char a;

    a = 'G';
    printf("original function: %c in lowercase is %c\n",
           a, tolower(a));
    printf("ft_function: %c in lowercase is %c\n",
           a, ft_tolower(a));

    return 0;
}
