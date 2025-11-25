#include <stdio.h>
#include <string.h>
  int main()
  {
    int i,j,z;
    char ch[20],ch_0[20];
    gets (ch);
    i=0;
    while (ch[i]!=/0)
    {
        for (j=0;j<=i;j++)
        {
            if (ch[i]==ch_0[j])
            {
                for (z=i;z<=strlen(ch);z++)
                {
                    ch[z]=ch[z+1];
                }
            }
        }
        ch_0[i]=ch[i];
        i++;
    }
     return 0;
   }