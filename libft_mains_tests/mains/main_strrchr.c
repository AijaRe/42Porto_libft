char	*ft_strrchr(const char *s, int c);

#include <stdio.h>
#include <string.h>
int main ()
{
   const char str[] = "ret's.test.the.strrchr";
   const char ch = '.';
   char *p, *p2;
   p = strrchr(str, ch);
   printf("Orig strrchr: String delimiter from %c is: %s\n", ch, p);
   p2 = ft_strrchr(str, ch);
   printf("ft_strrchr: String delimiter from %c is: %s\n", ch, p2);
   return 0;
}
