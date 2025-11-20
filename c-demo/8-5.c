#include <stdio.h>
#include <string.h>
  int main()
  {
      static char a[100];
      int i,j;
      printf("Enter a string:");
      gets(a);
      for (i=0,j=strlen(a)-1;i<=j;i++,j--)
      {
          if (a[i]!=a[j])
          {
              break;
          }
      }
      if (i>j)
        printf("It is a palindrome");
      else
        printf("It is not a palindrome");
     return 0;
   }