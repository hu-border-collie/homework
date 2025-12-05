#include <stdio.h>
int main()
{
  double pi = 0;
  for (int i = 1;; i++)
  {
    double n;
    n = 1.0 / (2 * i - 1);
    if (i % 2 == 0)
    {
      n = -n;
    }
    pi = pi + n;
    if (n < 0.0001 && n > -0.0001)
    {
      break;
    }
  }
  pi = 4 * pi;
  printf("%lf", pi);
  return 0;
}