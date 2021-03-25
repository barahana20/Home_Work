#include <stdio.h>
#include <conio.h>

int main()
{
	int key;

	for (int i = 0;i < 4;i++)
	{
		key = _getch();

		if (key == 224)
			key = _getch();

		printf("%d\n", key);
	}

	return 0;
}