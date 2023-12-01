//*Power Function*: Create a function that calculates the power of a number (e.g., x^n) using a recursive or iterative approach.
#include<stdio.h>

double recursive_poewer(int x,int n)
{
    
  if(n==0) 
  {
      return 1;
  }
    
   else  if(n>0) 
  {
      return x*recursive_poewer(x,n-1);
  } 
  else
  {
     return 1/(x*recursive_poewer(x,-n-1));  
  }
    
}

int main()
{
    int base,exponant;
    printf("Base =");
    scanf("%d",&base);
    printf("Exponant =");
    scanf("%d",&exponant);
    
    double result=recursive_poewer(base,exponant);
    printf("%lf",result);
    return 0;
}
