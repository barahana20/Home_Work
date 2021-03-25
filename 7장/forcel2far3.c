#include <stdio.h>

#define MAX 3
#define INCREMENT 10

int main()
{
	double celcius = 12.46;

	printf("¼·¾¾(C)		È­¾¾(F)\n");
	printf("o------------------\n");

	for (int i = 1;i <= MAX;i++, celcius += INCREMENT)
	{
		printf("%8.2lf %8.2f\n", celcius, 9.0 / 5 * celcius + 32);
	}

	return 0;
}