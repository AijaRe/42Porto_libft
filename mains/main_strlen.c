size_t	ft_strlen(const char *s);

#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="12345";
    printf("String is %s\n", a);
    // using the %zu format specifier to print size_t
    printf("Function: Length of string a = %zu \n",strlen(a));
    printf("Ft_function: Length of string b = %zu \n",ft_strlen(a));

    return 0;
}
