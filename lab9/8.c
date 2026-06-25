#include <stdio.h>
void main()
{
    int i=1,rem=0,rev=0,n,temp,rem1;
    printf("enter number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    while(rev!=0)
    {
        rem1=rev%10;
        rev=rev/10;
        if(rem1==0)
        {
            printf(" zero");
        }
        else if(rem1==1)
        {
            printf(" one");
        }
        else if(rem1==2)
        {
            printf(" two");
        }else if(rem1==3)
        {
            printf(" three");
        }else if(rem1==4)
        {
            printf(" four");
        }
        else if(rem1==5)
        {
            printf(" five");
        }else if(rem1==6)
        {
            printf(" six");
        }else if(rem1==7)
        {
            printf(" seven");
        }else if(rem1==8)
        {
            printf(" eight");
        }else if(rem1==9)
        {
            printf(" nine");
        }
    }
}
