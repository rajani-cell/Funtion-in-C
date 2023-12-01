//**GCD (Greatest Common Divisor)**: Create a recursive function to find the greatest common divisor of two integers using Euclidean algorithm.
#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
    
}



int main()
{
  int num1,num2;
  printf("Enter num1 and num2 :");
  scanf("%d%d",&num1,&num2);
 
  
  printf("GCD = %d",gcd(num1,num2)) ; 
    
}
