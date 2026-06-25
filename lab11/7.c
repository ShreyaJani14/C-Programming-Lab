#include <stdio.h>
void main() 
{
    int n,x,i,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
        temp = n;
        x = 0;
        while(temp != 0)
        {
            if(temp % 10 == i)
            {
                x++;
            }
            temp /= 10;
        }
        printf("Frequency of %d = %d\n", i, x);
    }
}


   