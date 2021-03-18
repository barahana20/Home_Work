#include <stdio.h>

int main()
{
	int a, b, c;
	a = b = c = 5;

	printf("a= a + 2 ==> %d\n", a = a + 2);
	printf("a ==> %d\n", a);
	printf("a = b + c ==> %d\n", a = b + c);
	printf("a ==> %d\n", a);

	a = 3; b = 4;
	printf("a+=b:%d", a+=b);

	int j = 4, k = 3, m = 2;
	printf("\n\nj*=k=m+5 %d", j *= k = m + 5);

	printf("\n\n");
	int n = 10;
	printf("%d\n", n++);
	printf("%d\n", n);

	printf("\n\n");
	n = 10;
	printf("%d\n", --n);
	printf("%d\n", n);

	return 0;
}