#include <stdio.h>

int main(void)
{
	int a = 0, b = 1, c = 2;
	if (a < b) printf("True\n"); else printf("False\n");
	if (a < b - c) printf("True\n"); else printf("False\n");
	if (b < c - 1) printf("True\n"); else printf("False\n");
	if (!c) printf("True\n"); else printf("False\n");
	return 0;
}
