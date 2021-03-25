#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	double gpa;

	printf("평균평점 입력:");
	scanf("%lf", &gpa);

	if (gpa >= 4.3)
	{
		printf("최고우수");
	}
	return 0;
}