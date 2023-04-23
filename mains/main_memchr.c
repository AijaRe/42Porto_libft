void	*ft_memchr(const void *s, int c, size_t n);

#include <stdio.h>
#include <string.h>
int main ()
{
   const char str[] = "Let's.test.the.strchr";
   const char ch = '.';
   char *p, *p2;
   p = memchr(str, ch, strlen(str));
   printf("Orig strchr: String starting from %c is: %s\n", ch, p);
   p2 = ft_memchr(str, ch, strlen(str));
   printf("ft_strchr: String starting from %c is: %s\n", ch, p2);
   return 0;
}
