#include <stdio.h>
#include <string.h>
  int main()
  {
      static char a[10];
      int n=0;
      printf("Enter a string:");
      gets(a);
      for (int i=0;a[i]!='\0';i++)
      {
          n=n*10+(a[i]-'0');
      }
      printf("digit=");
      printf("%d",n);
     return 0;
   }