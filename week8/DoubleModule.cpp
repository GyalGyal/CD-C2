#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double a;
double b;

void InputData() {
	printf("�� �Ǽ� �Է� : ");
	scanf("%lf %lf", &a, &b);
}
void DouSum() {
	printf("## ���� ##\n");
	InputData();
	printf("%f + %f = %f", a, b, a + b);
}
void DouSub() {
	printf("## ���� ##\n");
	InputData();
	printf("%f - %f = %f", a, b, a - b);
}
void DouMul() {
	printf("## ���� ##\n");
	InputData();
	printf("%f x %f = %f", a, b, a * b);
}
void DouDiv() {
	printf("## ������ ##\n");
	InputData();
	printf("%f / %f = %f", a, b, a / b);
}

