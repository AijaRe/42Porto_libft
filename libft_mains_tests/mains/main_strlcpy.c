size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	//size_t	src_size;
	size_t	src_size2;
	//char 	*src;
	char	*src2;
	//char 	*dest;
	char	*dest2;

	//src = calloc(11, sizeof(char));
	//dest = calloc(8, sizeof(char));
	//src = "ahoi, bebr";
	//src_size = strlcpy(dest, src, 8);
	//printf("src orig: %s\n", src);
	//printf("dest orig: %s\n", dest);
	//printf("src_size orig: %zu\n", src_size);

	src2 = calloc(11, sizeof(char));
	dest2 = calloc(8, sizeof(char));
	src2 = "ahoi, bebr";
	src_size2 = ft_strlcpy(dest2, src2, 8);
	printf("src ft: %s\n", src2);
	printf("dest ft: %s\n", dest2);
	printf("src_size ft: %zu\n", src_size2);
	return(0);
}
