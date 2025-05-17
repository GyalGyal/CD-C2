#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define X_END 79
#define Y_END 24

int main()
{
	int x, y;
	COORD pos = { 40, 12 };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("HELL로");
	_getch();

	return 0;
}

int main()
{
	int x, y;
	COORD pos = { 1,0 };

	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	Sleep(1000);

	pos.X = 10;
	pos.Y = 2;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	Sleep(1000);


	pos.X = 20;
	pos.Y = 5;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	Sleep(1000);


	pos.X = 40;
	pos.Y = 12;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	Sleep(1000);


	pos.X = 40;
	pos.Y = 24;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	Sleep(1000);

	return 0;
}


int main()
{
	unsigned char ch;

	do
	{
		ch = _getch();
		printf("%d %x : %c\n", ch, ch, ch);
	} while (ch != 13);

	return 0;
}

void GotoXY(int x, int y);
void Move_LeftRight_Key(char chr, int* x, int* y);

void main()
{
	char key;
	int x = 0, y = 0;

	do
	{
		GotoXY(x, y);
		printf("@");
		key = _getch();
		key = _getch();
		Move_LeftRight_Key(key, &x, &y);
	} while (key != 27);
}

void GotoXY(int x, int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Move_LeftRight_Key(char key, int* x1, int* y1) {
	switch(key) {
		case 75:
			*x1 = *x1 - 1;
			if (*x1 < 1) *x1 = X_END;
			break;
		case 77:
			*x1 = *x1 + 1;
			if (*x1 > X_END) *x1 = 1;
			break;
	}
}


























