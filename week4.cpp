#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main()
{
	int ar[3][4];
	int i, j;
	scanf("%d", &ar[0][0]);
	scanf("%d", &ar[2][3]);
	scanf("%d", &ar[0][1]);
	scanf("%d", &ar[2][0]);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", ar[i][j]);
		}printf("\n");
	}
}

//============================================================

int main()
{
	int ar1[3][4] = {0};
	int ar2[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int ar3[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int i, j;

	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 4; i++) {
			printf("%d ", ar1[j][i]);
		}printf("\n");
	}
	  i = 0;
	  j = 0;
	while (j < 3) {
		printf("%d ", ar2[j][i]);
		i++;
		if (i == 4)
		{
		i = 0;
			j++;
			printf("\n");
		}
	}
	i = 0;
	j = 0;
	do
	{
		printf("%d ", ar3[j][i]);
		i++;
		if (i == 4)
		{
			i = 0;
			j++;

			printf("\n");
		}
	} while (j < 3);

}


//============================================================

int main()
{
	int i, j;
	int ar[6][9] = { {0,0,0,1,0,0,0,0,0},
		{0,0,0,0,0,0,0,2,0},
		{0,0,0,0,1,0,0,0,0},
		{0,2,0,1,0,0,1,0,0},
		{0,0,0,1,0,0,0,0,0},
		{0,0,1,0,0,0,1,0,0} };

	int cnt = 0;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (ar[i][j] == 1)
			{
				cnt++;
			}
		}
	}
	printf("%d\n\n", cnt);
	i = 0;
	j = 0;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (ar[i][j] == 2)
			{
				printf("(%d, %d)\n", i, j);
			}
		}
	}
	i = 0;
	j = 0;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (ar[i][j] == 2)
			{
				ar[i-1][j] = 5;
				ar[i+1][j] = 5;
				ar[i][j-1] = 5;
				ar[i][j+1] = 5;
			}
		}
	}printf("\n");
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
}
*/

//============================================================

int main()
{
	int ar[6][6] = { 0 };
	int i, j;


	srand(time(NULL));

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			ar[i][j] = rand() % 99 + 1;
		}
	}
	i = 0;
	int sum = 0;
	int max = 0;
	int min_val = 101;
	int min[2] = {0};
	while (i < 6)
	{

		j = 0;
		while (j < 6)
		{
			printf("%3d", ar[i][j]);
			sum += ar[i][j];
			if (max < ar[i][j])
			{
				max = ar[i][j];
			}
			if (min_val > ar[i][j])
			{
				min_val = ar[i][j];
				min[0] = i;
				min[1] = j;
			}
			j++;
		}
		printf("\n");
		i++;
		
	}
	printf("sum : %d\n", sum);
	printf("max : %d\n", max);
	printf("min : (%d, %d)\n",min[0], min[1]);
	return 0;


}
