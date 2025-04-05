#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
/*
int main()
{
	int ar[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int br[7];

	printf("배열의 이름 : %d %d\n", ar, &ar[0]);
	printf("배열의 이름 : %d\n", br);

	return 0;
}

//====================================================================


int main()
{
	int n, * p;

	p = &n;
	*p = 70;

	printf("%d %d", n, *p);

	return 0;
}


//====================================================================


int main()
{
	int ar[] = { 11, 21, 31, 41, 51, 61, 71 };
	int* p, * q, * r;

	p = ar;
	q = &ar[1];
	r = (ar + 2);

	for (int n = 0; n < 7; n++)
	{
	
		printf("%d ", *(p + n));

	}
}

//====================================================================

int main()
{
	int ar[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8},{9, 10, 11, 12 } };
	int* p;
	int i;
	int len = sizeof(ar[0]) / sizeof(ar[0][0]);

	for (i = 0; i < len; i++)
	{
		printf("%d ", *(ar[1] + i));
	}
	printf("\n");

	p = ar[2];

	for (i = 0; i < len; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	return 0;
}
//====================================================================


int main()
{
	int ar[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8},{9, 10, 11, 12 } };
	int* p;
	int i;
	int len = sizeof(ar[0]) / sizeof(ar[0][0]);

	for (int n = 0; n < 3; n++)
	{
		for (i = 0; i < len; i++)
		{
		printf("%d ", *(ar[n] + i));
		}
		printf("\n");
	}
	return 0;
}*/

//====================================================================

void PrintArray(int ar[]);
void InputData(int* p);

int main()
{
	int ar[20] = { 0 };

	PrintArray(ar);
	InputData(ar);
	PrintArray(ar);

	return 0;
}

void PrintArray(int ar[])
{
	int len = sizeof(ar) / sizeof(ar[0]);
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}


void InputData(int* p)
{
	int len = 20;
	for (int i = 0; i < len; i++)
	{
	printf("input datas...%d\n", i+1);
	scanf_s("%d ", &p[i]);
	}
	
}