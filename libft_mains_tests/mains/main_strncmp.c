int	ft_strncmp(const char *s1, const char *s2, size_t n);

#include <stdio.h>
#include <string.h>
int main ()
{
    int res;
    int ft_res;
    char s1[] = "Hello";
    char s2[] = "Helloworld";
    res = strncmp(s1, s2, 5);
    if(res > 0)
    {
        printf("orig strncmp: s2 is less than s1\n");
    }
    else if(res < 0)
    {
        printf("orig strncmp: s1 is less than s2\n");
    }
    else if (res == 0)
    {
        printf("orig strncmp: s1 is equal to s2\n");
    }
    ft_res = ft_strncmp(s1, s2, 5);
    if(ft_res > 0)
    {
        printf("ft_strncmp: s2 is less than s1\n");
    }
    else if(ft_res < 0)
    {
        printf("ft_strncmp: s1 is less than s2\n");
    }
    else if (ft_res == 0)
    {
        printf("ft_strncmp: s1 is equal to s2\n");
    }
    return 0;
}
