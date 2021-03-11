#include <stdio.h>

#define PI 3.14

int main()
{
	double r = 7.58;
	double area = r * r * PI;
	double round = 2 * PI * r;

	printf("원의 면적: %lf\n", area);
	printf("원의 둘레: %lf\n", round);

	return 0;
}
}