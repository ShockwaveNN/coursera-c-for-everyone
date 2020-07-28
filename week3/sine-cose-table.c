// Program that prints a table of values for sine and cosine between (0, 1)

#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("x\t\tsin(x)\t\tcos(x)\n");
	for(double i = 0; i <= 1; i+= 0.1)
	{
		printf("%lf\t%lf\t%lf\n", i, sin(i), cos(i));
	}
	return 0;
}
