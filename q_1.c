#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)/*run parent loop till number of rows*/
	{
		for(k=1;k<i;k++)/*loop for printing initial space, before printing star*/
		{
		printf(" ");
		}
		for(j=5;j>=i;j--)/*loop for printing star*/
		{
			printf("*");
		}
		printf("\n");
	}
}
