#include <stdio.h>

int main(void)
{
	int i = 2;
	switch(i)
	{
		case 1: printf("1"); break;
		case 2: printf("2");
		case 3: printf("3");break;
		default: printf("def");
	};
	return 0;
}
