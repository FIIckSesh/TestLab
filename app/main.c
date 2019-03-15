#include <stdio.h>
#include "myfunc.h"

int main()
{
  values val;
  double a;
  double b;
  double c;
  printf("Введите коэффициенты: \n");
  scanf("%lf %lf %lf", &a, &b, &c);
  val = sqrFunc(a, b, c);
  if (val.count == 2) printf("Корни уравнения: x1 = %.2lf, x2 = %.2lf \n", val.x1, val.x2);
  return 0;
}
