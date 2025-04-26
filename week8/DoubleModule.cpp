#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double a;
double b;

void InputData() {
	printf("µÎ ½Ç¼ö ÀÔ·Â : ");
	scanf("%lf %lf", &a, &b);
}
void DouSum() {
	printf("## µ¡¼À ##\n");
	InputData();
	printf("%f + %f = %f", a, b, a + b);
}
void DouSub() {
	printf("## »¬¼À ##\n");
	InputData();
	printf("%f - %f = %f", a, b, a - b);
}
void DouMul() {
	printf("## °ö¼À ##\n");
	InputData();
	printf("%f x %f = %f", a, b, a * b);
}
void DouDiv() {
	printf("## ³ª´°¼À ##\n");
	InputData();
	printf("%f / %f = %f", a, b, a / b);
}

