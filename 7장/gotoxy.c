#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y);

int main()
{
	//gotoxy(3, 3);
	//printf("º°");

	//printf("\n\n");

	int key;
	int x = 5, y = 5;

	while ((key = _getch()) != 'q')
	{
		system("cls");
		switch (key)
		{
			case 'w':
				y--;
				break;
			case 'a':
				x--;
				break;
			case 'd':
				x++;
				break;
			case 's':
				y++;
				break;
			default:
				break;
		}

		gotoxy(x, y);
		printf("%c", '>');
	}
	return 0;
}

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}