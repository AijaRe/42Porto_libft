size_t	ft_strlcat(char *dst, const char *src, size_t size);

#include <stdio.h>

int		main(void)
{
	char dest[8] = "123";
	char src[] = "4567890";
	unsigned int size = 8;
	unsigned int result;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("dest (cat) = %s\nresult = %d\n-----\n", dest, result);

	return (0);
}
