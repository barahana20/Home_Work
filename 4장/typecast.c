#include <stdio.h>

int main()
{
	int a = 3.4;
	double d = 3;

	printf("%10f\n", 3 + 4.5);
	printf("%5d\n", 10 / 4);
	printf("%10f\n", (double)10 / 4);

	printf("%5d\n", (int)(3.4 + 7.8));
	printf("%10f\n", (int)3.4 + 7.8);
}