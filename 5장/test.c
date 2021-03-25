#include <stdio.h>

int main(void)
{
	char color = 'R';
	switch (color) {
	case 'R':
		puts("red");
	case 'B':
		puts("blue");
	case 'Y':
		puts("yellow");
	default:
		puts("white");
	}
	return 0;
}