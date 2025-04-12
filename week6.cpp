#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <string.h>
#include <math.h>

struct Coordi {
	int x;
	int y;
};


int main()
{
	struct Coordi p1;
	struct Coordi p2 = { 5, 9 };
	struct Coordi p3;
	struct Coordi p4;

	p1.x = 2;
	p1.y = 3;

	printf("p1의 좌표( %d , %d )\n", p1.x, p1.y);
	printf("p2의 좌표( %d , %d )\n", p2.x, p2.y);

	scanf("%d %d", &p3.x, &p3.y);
	printf("p3의 좌표( %d , %d )\n", p3.x, p3.y);

	p4 = p2;
	printf("p4의 좌표(%d , %d )", p4.x, p4.y);
}

//===========================

struct Circle {
	int x;
	int y;
	double r;
};

int main()
{
	struct Circle c1, c3, c4;

	c1.x = 998;
	c1.y = 1;
	c1.r = 79.15;

	printf("좌표 : ( %d, %d ), 반지름 : %f \n", c1.x, c1.y, c1.r);

	struct Circle c2 = { 0, 0 , 0 };
	
	printf("좌표 : ( %d, %d ), 반지름 : %f \n", c2.x, c2.y, c2.r);


	c3 = c1;
	printf("좌표 : ( %d, %d ), 반지름 : %f \n", c3.x, c3.y, c3.r);

	c4.x = c2.y;
	c4.y = c2.x;
	c4.r = 45;

	printf("좌표 : ( %d, %d ), 반지름 : %f \n", c4.x, c4.y, c4.r);
}

//===========================

struct Person {
	char name[10];
	int age;
	double height;
};


int main()
{
	struct Person m1;
	struct Person m2 = { "허난설헌", 13, 159.9 };

	strcpy(m1.name, "허균");
	m1.age = 19;
	m1.height = 168.34;


	printf("이름 : %s, 나이 : %d, 키 : %f\n", m1.name , m1.age, m1.height);
	printf("이름 : %s, 나이 : %d, 키 : %f\n", m2.name, m2.age, m2.height);

	struct Person m3;
	scanf("%s, %d, %f", &m3.name, &m3.age, &m3.height);
	printf("이름 : %s, 나이 : %d, 키 : %f", m3.name, m3.age, m3.height);

	return 0;
}

//===========================

struct Circle {
	int x;
	int y;
	double r;

	double S() {
		return r* r* M_PI;
	}
	double L() {
		return 2 * r * M_PI;
	}
};

int main()
{
	struct Circle c;

	c.x = 458;
	c.y = 45;
	c.r = 5;

	printf("좌표 : (%d, %d), 넓이 : %.2f, 둘레 : %.2f", c.x, c.y, c.S(), c.L());
}

//===========================
