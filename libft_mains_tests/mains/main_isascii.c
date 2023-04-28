int	ft_isascii(int c);

#include <stdio.h>
#include <ctype.h>

int main(void)
{
   int ch;

   for (ch = 124; ch <= 130; ch++) {
      printf("%d    ", ch);
      if (isascii(ch))
         printf("Function: The character is %c\n", ch);
      else
         printf("Function: Cannot be represented by an ASCII character\n");
   }
   for (ch = 124; ch <= 130; ch++) {
      printf("%d    ", ch);
      if (ft_isascii(ch))
         printf("Ft_function: The character is %c\n", ch);
      else
         printf("Ft_function: Cannot be represented by an ASCII character\n");
   }
   return 0;
}
