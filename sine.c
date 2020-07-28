#include <stdio.h>
#include <math.h>

// Program print sin(x) in range between (0,1)
int main(void)
{
  double input;
  printf("Enter x:");
  scanf("%lf", &input);
  double value = sin(input);
  printf("sin(x) is : %f \n\n", value);
  return 0;
}
