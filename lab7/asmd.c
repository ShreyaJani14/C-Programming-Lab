#include <stdio.h>
void main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("Enter an operator (+, -, *, /): ");
    char op;
    scanf(" %c",&op);
    switch(op) {    
        case '+': printf("%d + %d = %d\n",x,y,x+y); break;
        case '-': printf("%d - %d = %d\n",x,y,x-y); break;
        case '*': printf("%d * %d = %d\n",x,y,x*y); break;
        case '/': 
            if(y != 0)
                printf("%d / %d = %f\n",x,y,(float)x/y); 
            else
                printf("Error: Division by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
}