#include<stdio.h>
#include<stdlib.h>
int Han_Xin_2()
{
	char sign = 'X', sign2 = '-';
	int i, j, temp, temp2;
	printf("(2)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i == 0) || (i == 9) | (j == 0) | (j == 9) | (i == 1) || (i == 2) | (j == 1) | (j == 2) | (i == 8) || (i == 7) | (j == 8) | (j == 7)) printf("%c", sign);
			else  printf("%c", sign2);
		}
		printf("\n");
	}
}