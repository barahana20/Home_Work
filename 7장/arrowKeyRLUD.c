#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

void gotoxy(int x, int y);



int main()
{
	int x = 5;
	int y = 5;
	int key;

	gotoxy(x, y);
	printf("%c", '>');

	while ((key = _getch()) != 'q')
	{
		system("cls");

		if (key == 224)
		{

			key = _getch();

			switch (key)
			{
			case UP:
				y--;
				break;
			case LEFT:
				x--;
				break;
			case RIGHT:
				x++;
				break;
			case DOWN:
				y++;
				break;
			default:
				break;
			}
		}
		gotoxy(x, y);
		printf("%c", '>');
		if (x < 0)x = 0;
		if (y > 23)y = 23;
	}

	
	
	return 0;
}

void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}