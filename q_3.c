#include<stdio.h>
void main()
{
  int i,j,k;
  for(i=0;i<=4;i++)/*run parent loop till number of rows*/
  {
    for(j=0;j<=i;j++)
    {
      if((i+j)%2==0)/*Conditional statement to check the condition and to print the right output*/
      {
        printf("1");/*prints 1 if condition is true*/
      }
      else
      {
        printf("0");/*prints 0 if condition is false*/
      }
    }
    printf("\n");/*prints a new line after the second loop ends*/
  }
}
