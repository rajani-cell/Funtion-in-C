//*Factorial Function*: Write a function to calculate the factorial of a number and use it to solve factorial-related problems.
#include<stdio.h>

int fact(int n)
{

if(n==0)
{
  return 1;
}

else if(n==1)
{
  return 1;
}

else
{
  return n*fact(n-1);
}

}

int main()
{

  int number;
  printf("Enter Number :");
  scanf("%d",&number);

int result=fact(number);

printf("Factorial value = %d",result);

  return 0;
}
