#include<stdio.h>
void main()
{
  int i,j;
  int space=0;
  for(i=1;i<=5;i++)/*Run parent loop*/
  {
  	for(j=5;j>=space;j--)/*Prints Space*/
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)/*Run loop to print first part of row*/
	{
		printf("%d",j);
	}
	for(j=i-1;j>=1;j--)/*Run loop to print second part of row*/
	{
		printf("%d",j);
	}
	printf("\n");
	space++;/*Increments the value of the variable space*/
  }
}
