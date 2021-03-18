#include <stdio.h>

int main()
{
	int m = 10, n = 5;
	int result;

	result = m++ + --n;
	printf("%d %d %d\n", m, n, result);

	result = ++m - n--;
	printf("%d %d %d\n", m, n, result);


	return 0;
}