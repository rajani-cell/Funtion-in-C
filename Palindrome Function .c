//*Palindrome Function*: Develop a function that checks if a given string is a palindrome and use it to verify palindromes.
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int ispalandrome(char *str,int left,int right)
{
    
   if(left==right) 
   {
       return true;
   }
   if(str[left]!=str[right]) 
   {
       return false;
   }  
   return ispalandrome(str,left+1,right-1);
    
    
}

int main()
{
    char str[100]="madam";
    int len=strlen(str);
    
   if(ispalandrome(str,0,len-1))
   {
       printf("String is plandrome");
   }
    
   else
   {
       printf("String is not plandrome");
   }
    return 0;
}
