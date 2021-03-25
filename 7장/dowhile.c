#include <stdio.h>

int main()
{
	int input;
	
	do {
		printf("enter : ");

		scanf("%d", &input);

	} while (input != 1 && input != 2 && input != 3);
	return 0;
}