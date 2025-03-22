#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int a;
	double b;
	char c;

	a = 153; b = 12.7; c = 'J';

	return 0;
}

//========================================================

int main()
{
	int a;
	double b;
	char c;

	a = 153; b = 12.7; c = 'J';
	printf("변수 a의 주소 : %d\n", &a);
	printf("변수 b의 주소 : %d\n", &b);
	printf("변수 c의 주소 : %d\n", &c);

	return 0;
}

//========================================================

int main()
{
	int a;		double b;	char c;
	int* pa; double* pb; char* pc;


	a = 153; b = 12.7; c = 'J';
	pa = &a; pb = &b; pc = &c;
	printf("pa = %x pb = %1f pc = %x\n", pa, pb, pc);
	printf("&a = %p &b = %p &c = %p\n", &a, &b, &c);

	printf("a = %d b = %1f c = %c\n", a, b, c);
	printf("*pa = %d *pb = %1f *pc = %c\n", *pa, *pb, *pc);
	return 0;
}

//========================================================

int main()
{
	int n;
	int* pn, * pr;
	int ar[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

	n = 49;
	pn = &n;
	pr = &ar[2];
	printf("%d %d %p %p\n", n, ar[2], pn, pr);

	*pn = 59;
	*pr = 33;
	printf("%d %d\n", n, ar[2]);

	return 0;
}*/

//========================================================

void AddNum(int, int);
void SubNum(int*, int*);
void MulNum(int*, int*);
void DivNum(int, int);

int main()
{
	int a, b;
	int* pa = &a, * pb = &b;


	printf("정수 입력 : ");
	scanf("%d %d", &a, &b);


	AddNum(a, b);
	/*SubNum(&a, &b);
	MulNum(pa, pb);
	DivNum(*pa, *pb);*/

	return 0;
}


void AddNum(int x, int y) {
	printf("%d + %d = %d", x, y, x + y);
}



