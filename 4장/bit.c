#include <stdio.h>

int main()
{
	int x = 127;

	printf("%5d -> %08x\n", x, x);
	printf("x&1 -> %08x\n", x&1);
	printf("x|1 -> %08x\n", x | 1);
	printf("x^1 -> %08x\n", x ^ 1);
	printf("~(-1) -> %08x\n", ~(-1));
	printf("~1 -> %08x\n", ~1);

	int a = 4;
	printf("x<<1 --> %d, %08x\n", a << 1, a << 1);

	return 0;
}