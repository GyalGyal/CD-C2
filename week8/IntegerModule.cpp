#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a;
int b;

void InputInteger() {
	printf("�� ���� �Է� : ");
	scanf("%d %d", &a, &b);
}
void IntSum()
{
	printf("## ���� ##\n");
	InputInteger();
	printf("%d + %d = %d", a, b, a+b);
}
void IntSub() {

	printf("## ���� ##\n");
	InputInteger();
	printf("%d - %d = %d", a, b, a - b);
}
void IntMul() {

	printf("## ���� ##\n");
	InputInteger();
	printf("%d x %d = %d", a, b, a * b);
}
void IntDiv() {
	printf("## ������ ##\n");
	InputInteger();
	printf("%d / %d = %d", a, b, a / b);
}
