#include <stdio.h>

int main()
{
	int speed;
	printf("\nEnter you speed as integer:");
	scanf("%d", &speed);
	if (speed < 65)
		printf("\nNo sppeding Ticket\n\n");
	else
		printf("\nSpeeding Ticket\n\n");
	return 0;
}
