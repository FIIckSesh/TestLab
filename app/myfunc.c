#include <stdio.h>
#include <math.h>
#include "myfunc.h"

values sqrFunc(double a, double b, double c){
  values value;
  if (a == 0 && b != 0){
    value.x1 = -c/b;
    value.x2 = value.x1;
    value.count = 1;
  } else if (a == 0 && b == 0){
    printf("a = 0, b = 0 \n");
    value.count = 0;
  } else {
    if (b*b - 4 * a * c >= 0){
      value.x1 = (-b + sqrt(b*b - 4 * a * c))/2*a;
      value.x2 = (-b - sqrt(b*b - 4 * a * c))/2*a;
      value.count = 2;
    } else {
      printf("Корней нет \n");
      value.count = 0;
    }
  }
    
  return value;
}
