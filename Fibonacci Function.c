//*Fibonacci Function*: Create a function to generate and print the first N numbers in the Fibonacci sequence.

#include<stdio.h>

int fibo(int n);
int fibo(int n)
{
 
 if(n==0)
 {
  return 0;
 }

 else if(n==1)
 {
  return 1;
 }
 
else
{

  return fibo(n-1)+fibo(n-2);
}

}




int main()
{
int number;
printf("Enter the fibonacci size :");
scanf("%d",&number);

for(int i=0;i<number;i++)
{

printf("%d ",fibo(i));

}



return 0;

}
