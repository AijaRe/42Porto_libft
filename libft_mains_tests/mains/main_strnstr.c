char	*ft_strnstr(const char *big, const char *little, size_t len);

#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char *bigstr = "Foo Bar Baz";
        const char *littlestr = "Bar";
        char *ptr;

        ptr = ft_strnstr(bigstr, littlestr, 10);
        printf("ft_strnstr: %s\n", ptr);

}
