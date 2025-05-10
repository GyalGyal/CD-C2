#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

/*int main()
{
	int n;

	scanf_s("%d", &n);
	printf("%d", n);

	return 0;
}

//==================================

int main()
{
	float n;

	scanf_s("%f", &n);
	printf("%f", n);

	return 0;
}

int main()
{
	int a, b, c;

	scanf("%d", &a);
	printf("a = %d\n", a);
	scanf("%d%d", &a, &b);
	printf("a = %d b = %d\n", a, b);
	scanf("%d%d%d", &a, &b,&c);
	printf("a = %d b = %d c = %d\n", a, b, c);

	return 0;
}

int main()
{
	char ch;

	scanf("%c", &ch);
	printf("%c %d", ch, ch);

	return 0;
}


int main()
{
	char ch, ca, cr;

	scanf("%c", &ch);
	printf("ch = %c ch = %d\n", ch, ch);
	scanf("%c%c", &ch, &ca);
	printf("ch = %c ch = %d\n", ch, ch);
	printf("ca = %c ca = %d\n", ca, ca);
	scanf("%c%c%c", &ch, &ca, &cr); 
	printf("ch = %c ch = %d\n", ch, ch);
	printf("ca = %c ca = %d\n", ca, ca);
	printf("cr = %c cr = %d\n", cr, cr);

	return 0;

}

int main()
{
	char str[20];

	scanf("%s", str);
	printf("%s", str);

	return 0;
}

int main()
{
	char str1[15], str2[15];

	scanf("%s", str1);
	printf("str1 = %s\n", str1);
	scanf("%s%s", str1, str2);
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	return 0;
}

int main()
{
	char ch1, ch2, ch3;

	ch1 = getchar();
	ch2 = getchar();
	ch3 = getchar();
	printf("ch1 = %d : %c\n", ch1, ch1);
	printf("ch2 = %d : %c\n", ch2, ch2);
	printf("ch3 = %d : %c\n", ch3, ch3);

	return 0;
}

int main()
{
	char str[80];

	gets_s(str);
	printf("%s\n", str);
	puts(str);

	return 0;
}

int main()
{
	char ch;

	ch = _getche();
	printf("\nch = %d : %c\n", ch, ch);
	putchar(ch);

	return 0;
}

int main()
{
	int n = 0;

	while (1)
	{
		printf("%d%c", n, 13);
		n++;
	}

	return 0;
}


int main()
{
	int n;
	char c;
	scanf("%d", &n);
	getchar(); 
	scanf("%c", &c);
	printf("%d %c", n, c);

	return 0;
}


int main()
{
	char ch;
	
	while (1)
	{
		ch = getchar();
		if (ch == 10)
		{
			break;
		}
		putchar(ch);
	}
}



int main()
{
	char ch;

	while (1)
	{
		ch = getchar();
		if (ch == 10)
		{
			break;
		}
		if ('a' <= ch && 'z' >= ch|| 'A' <= ch && 'Z' >= ch) {
			putchar(ch);
		}
		
	}
}


int main()
{
	char ch;
	
	while (1)
	{
		ch = getchar();

		if ('a' <= ch && 'z' >= ch)
		{
		ch = ch - 'a' + 'A';
		}
		

		printf("%c", ch);

		if (ch == 10)
		{
			break;
		}
	}
}

*/

int main()
{
	int num = 0;
	char c;

	while (1)
	{
		c = getchar();
		if (c == 10)
		{
			break;
		}

		num = num*10 + c - '0';

	}
	printf("%d", num);
}










