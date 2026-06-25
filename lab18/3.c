#include<stdio.h>
float simple_interest(int p,int r,int t);
void main()
{
    int p,r,t;
    printf("Enter principal, rate and time: ");
    scanf("%d %d %d",&p,&r,&t);
    float interest = simple_interest(p,r,t);
    printf("Simple Interest: %.2f\n",interest);    
}
float simple_interest(int p,int r,int t)
{
    return (p*r*t)/100.0;
}