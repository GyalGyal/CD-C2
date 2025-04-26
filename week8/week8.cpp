#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include "MenuModule.h"
#include "IntegerModule.h"
#include "DoubleModule.h"
#define ERROR "입력오류\n"


/*
	int ga;
	int gb;

	void Sum();
	void Difference();

	int main()
	{
		printf("정수를 2개 입력하세요 : ");
		scanf("%d %d", &ga, &gb);
		Sum();
		Difference();
	}






	void Sum()
	{
		printf("%d + %d = %d\n", ga, gb, ga + gb);
	}

	void Difference()
	{
		int diff;

		if (ga > gb)
		{
			diff = ga - gb;
			printf("%d - %d = ", ga, gb);
		}
		else
		{
			diff = gb - ga;
			printf("%d - %d = ", gb, ga);
		}
		printf("%d ", diff);
	}
	

//==========================================================

int ga;
int gb;

void Div();
void Mul();

int main()
{
	printf("정수를 2개 입력하세요 : ");
	scanf("%d %d", &ga, &gb);
	Div();
	Mul();
	printf("%d %d", ga , gb);
}

void Div()
{
	int m, n;

	printf("정수 2개 입력 : ");
	scanf("%d %d", &m, &n);
	gb = m / n;
}


void Mul()
{
	int m, n;

	printf("정수 2개 입력 : ");
	scanf("%d %d", &m, &n);
	ga = m * n;
}

//==========================================================

void Ccube();
void Coding();

int main()
{
	Ccube();
	Ccube();
	Ccube();
	Coding();
	Coding();
	Coding();

}

void Ccube()
{
	int cnt = 0;

	cnt++;
	printf("%d 씨큐브\n", cnt);
}

void Coding()
{
	static int cnt = 0;

	cnt++;
	printf("%d 코딩\n", cnt);
}


//==========================================================

#define MAX 10
#define PI 3.141592
#define C3C "씨큐브코딩"
#define PRN printf
#define MACRO "## 매크로 상수##\n"

int main()
{
	PRN(MACRO);
	PRN("MAX = %d\n", MAX);
	PRN("PI = % lf\n", PI);

}


//==========================================================


int main()
{
	MainMenu();
}*/

//==========================================================

int main()
{
	int menu = 0;
	int subm = 0;

	while (menu != 3)
	{
		menu = MainMenu();
		switch (menu)
		{
		case 1:
			subm = IntMenu();
			switch (subm)
			{
			case 1: IntSum(); break;
			case 2: IntSub(); break;
			case 3: IntMul(); break;
			case 4: IntDiv(); break;
			case 5: break;
			default: printf(ERROR);
			}
			break;
		case 2:
			subm = DouMenu();
			switch (subm)
			{
			case 1: DouSum(); break;
			case 2: DouSub(); break;
			case 3: DouMul(); break;
			case 4: DouDiv(); break;
			case 5: break;
			default: printf(ERROR);
			}
			break;
		}
	}
}
