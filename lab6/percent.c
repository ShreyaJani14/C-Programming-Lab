#include <stdio.h>
void main()
{
    int a,b,c,d,e;
    float per;
    printf("please enter marks of five subjects: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    per=(a+b+c+d+e)/5.0;
    if(per>70)
        printf("class distinction");
    else if(per>60 && per<=70)
        printf("class first");
    else if(per>45 && per<=60)
        printf("class second");
    else if(per>40 && per<=45)
        printf("class pass");
    else
        printf("fail");
}