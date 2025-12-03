#include <stdio.h>
int main()
{
  int m;
  double n, a = 0;
  scanf("%lf %d", &n, &m);
  for (int i = 0; i < m; i++)
  {
    a = a + n;
    n = n / 4;
    if (i < m - 1)
    {
      a = a + n;
    }
  }
  printf("%.2lf\n%.2lf", a, n);
  return 0;
}