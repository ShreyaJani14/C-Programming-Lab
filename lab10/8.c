#include <stdio.h>
void main()
{
   int n,rev=0,rem=0,temp;
   printf("enter a num: ");
   scanf("%d",&n);
    temp=n;
   while(temp!=0)
    {
         rem=temp%10;
         rev=rev*10+rem;
         temp=temp/10;
    }
    if(rev==n)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}