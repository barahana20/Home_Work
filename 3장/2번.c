#include <stdio.h>

#define PI 3.14

int main()
{
	double r = 7.58;
	double area = r * r * PI;
	double round = 2 * PI * r;

	printf("���� ����: %lf\n", area);
	printf("���� �ѷ�: %lf\n", round);

	return 0;
}
}