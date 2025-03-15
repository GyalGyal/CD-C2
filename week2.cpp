#include <stdio.h>


int main()
{
	char ch1, ch2;

	ch1 = 'A';
	ch2 = 'a';
	printf("%c %c\n", ch1, ch2);
	printf("%d %d\n", ch1, ch2);

	printf("%c %c\n", 66, 98);
	printf("%d %d\n", 66, 98);
	return 0;
}



//====================================================================================


int main()
{
	char ch1, ch2;

	ch1 = 'A';
	ch2 = 'a';
	printf("A : %d\n", ch1);
	printf("a : %d\n", ch2);
	printf("%d\n", ch1 + ch2);
	printf("%d\n", ch1 - ch2);
	printf("%d\n", ch1 / ch2);
	printf("%d\n", ch1 * ch2);
	printf("%d\n", ch1 < ch2);
	printf("%d\n", ch1 > ch2);
	printf("%d\n", ch1 % ch2);
}

//====================================================================================

int main()
{
	char ch;

	printf("문자를 입력하세요 : ");
	ch = getchar();
	putchar(ch);
	printf("%c %d\n", ch, ch);
	return 0;
}

//====================================================================================


int main()
{
	char str1[] = { 'H', 'e' , 'l', 'l' , 'o' };
	char str2[] = { 'H', 'e' , 'l', 'l' , 'o', '\0' };

	printf("%s\n", str1);
	printf("%s\n", str2);
	return 0;
}

//====================================================================================

int main()
{
	char str1[10] = { 'H', 'e' , 'l', 'l' , 'o' };
	char str2[10] = { 'H', 'e' , 'l', 'l' , 'o', '\0' };

	printf("%s\n", str1);
	printf("%s\n", str2);
	return 0;
}

//====================================================================================

int main()
{
	char str1[415] = "Coding is fun";
	char str2[] = "Coding is fun";

	printf("%s\n", str1);
	printf("%s\n", str2);
	return 0;
}

//====================================================================================

int main()
{
	char str1[415] = "Coding is fun";
	char str2[] = "Coding is fun";


	for (int i = 0; i < 14; i++)
	{
		printf("%c", str1[i]);
	};
}

//====================================================================================

int main()
{
	char str[15] = { 'H', 'i', ' ', 'c', '3', ' ', 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	return 0;
}

//====================================================================================

int main()
{
	char str[] = "Coding is computer programmng";
	int i = 0;
	int n = sizeof(str) / sizeof(str[0]);

	while (i <= n)
	{
		printf("%c", str[n-i]);
		i++;
	}
	return 0;
}

//====================================================================================

int main()
{
	char chr1, chr2;

	chr1 = getchar();

	if (chr1 >= 'a' && chr1 <= 'z')
	{
		printf("%c", chr1 - 32);
	}
	else
	{
	
		printf("%c", chr1 + 32);
	}
	return 0;
}




