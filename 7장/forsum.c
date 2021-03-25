#include <stdio.h>

int main()
{
	int i, sum;
	for (i = 1,sum = 0;i <= 10;i++)
	{
		sum += i;
	}
	printf("1에서 10까지의 합 : %3d\n", sum);
	printf("i:%d, sum:%d\n", i, sum);

	for (i = 1, sum = 0;i <= 10;)
	{
		sum += i++;
	}
	printf("1에서 10까지의 합 : %3d\n", sum);
	printf("i:%d, sum:%d\n", i, sum);

	for (i = 0, sum = 0;i <= 9;)
	{
		sum += ++i;
	}
	printf("1에서 10까지의 합 : %3d\n", sum);
	printf("i:%d, sum:%d\n", i, sum);

	for (i = 1, sum = 0;i <= 10;sum+=i++);
	printf("1에서 10까지의 합 : %3d\n", sum);
	printf("i:%d, sum:%d\n", i, sum);
	return 0;
}