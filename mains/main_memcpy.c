void	*ft_memcpy(void *dest, const void *src, size_t n);

#include <stdio.h>
#include <string.h>

int main ()
{
   const char src[50] = "replacer text";
   char dest[50];
   strcpy(dest,"Test the memcpy!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   const char src2[50] = "ft replacer text";
   char dest2[50];
   strcpy(dest2,"Test the ft_memcpy!");
   printf("Before memcpy dest = %s\n", dest2);
   ft_memcpy(dest2, src2, strlen(src2)+1);
   printf("After ft_memcpy dest = %s\n", dest2);

   return(0);
}
