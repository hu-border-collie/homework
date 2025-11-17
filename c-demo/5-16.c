#include <stdio.h>
  int main()
  {
    for (int i=1;;i++)
    {
        int n,m,x,y,z,o;
        scanf ("%d",&n);
        m=n;
        if (m==0)
        {
            break;
        }
        printf ("Case %d:",i);
        o=0;
        for (x=0;x<=n;x++)
        {
            for (y=0;y<=n;y++)
            {
                for (z=0;z<=n;z++)
                {
                    if (1*x+2*y+5*z==n)
                    {
                        o++;     
                    }
                }
            }
        }
        printf("%d\n",o);
    }
      return 0;
   }