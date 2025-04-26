#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a;
int b;

void InputInteger() {
	printf("µÎ Á¤¼ö ÀÔ·Â : ");
	scanf("%d %d", &a, &b);
}
void IntSum()
{
	printf("## µ¡¼À ##\n");
	InputInteger();
	printf("%d + %d = %d", a, b, a+b);
}
void IntSub() {

	printf("## »¬¼À ##\n");
	InputInteger();
	printf("%d - %d = %d", a, b, a - b);
}
void IntMul() {

	printf("## °ö¼À ##\n");
	InputInteger();
	printf("%d x %d = %d", a, b, a * b);
}
void IntDiv() {
	printf("## ³ª´°¼À ##\n");
	InputInteger();
	printf("%d / %d = %d", a, b, a / b);
}
