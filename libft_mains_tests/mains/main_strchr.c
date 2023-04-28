char	*ft_strchr(const char *s, int c);

#include <stdio.h>
#include <string.h>
int main ()
{
   const char str[] = "Let's.test.the.strchr";
   const char ch = '.';
   char *p, *p2;
   p = strchr(str, ch);
   printf("Orig strchr: String starting from %c is: %s\n", ch, p);
   p2 = ft_strchr(str, ch);
   printf("ft_strchr: String starting from %c is: %s\n", ch, p2);
   return 0;
}
