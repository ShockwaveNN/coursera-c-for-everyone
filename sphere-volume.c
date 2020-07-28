// Program to calculate volume of sphere
// using (4*pi*r^3)/3 forumla

#include<stdio.h>
#define PI 3.14159

int main(void)
{
  double radius;
  printf("Enter radius:");
  scanf("%lf", &radius);
  printf("volume is : %lf \n\n", (4 * PI * radius * radius * radius) / 3.0);
  return 0;
}
