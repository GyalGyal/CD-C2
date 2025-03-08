#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


/*int main()
{

	int subject[8];

	subject[0] = 32;
	subject[1] = 45;
	scanf("%d", &subject[2]);
	scanf("%d", &subject[3]);

	

	for (int n = 4; n < 8; n++)
	{
		scanf("%d", &subject[n]);
	}
	
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", subject[i]);
	}
}

//=================================================================================

int main()
{
	int ar[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int br[10];
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d %d\n", ar[i], br[i]);
	}

}

//=================================================================================

int main()
{
	int ar[10];
	int br[] = { 1,2,3,4,5 };
	double dr[20];

	printf("%d\n", sizeof(ar));
	printf("%d\n", sizeof(br));
	printf("%d\n", sizeof(dr));
	printf("%d\n", sizeof(ar)/sizeof(ar[0]));
	printf("%d\n", sizeof(br) / sizeof(ar[0]));
	printf("%d\n", sizeof(dr) / sizeof(ar[0]));

	return 0;
}

//=================================================================================

int main()
{
	int ar[10];
	int i, sum = 0;
	srand(time(NULL));

	for (i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		ar[i] = rand() % 9 + 1;
		printf("%d ", ar[i]);
		sum += ar[i];
	}
	printf("합은 %d", sum);


	return 0;
}*/

//=================================================================================

int main()
{
   float ar[10];
   int i;
   float max = 0.0;

   srand(time(NULL));

   for (i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
   {
	   ar[i] = (rand() % 989 + 11)/ 10.0;
   }

   max = ar[0];
   for (i = 1; i < 10; i++) {
	   if (ar[i] > max) max = ar[i];
   }
   printf("max = %f", max);
}














