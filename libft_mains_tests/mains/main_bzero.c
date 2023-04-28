void	ft_bzero(void *s, size_t n);

#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is original function before bzero");
   printf("Display before bzero: %s\n", str);
   bzero(str, 50);
   printf("Display after bzero: %s\n", str);

   char str2[50];

   strcpy(str2,"This is ft_function before bzero");
   printf("Display before bzero: %s\n", str2);
   ft_bzero(str2, 50);
   printf("Display after bzero: %s\n", str2);

   return(0);
}
