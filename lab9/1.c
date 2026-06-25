#include <stdio.h>
void main() {
    int n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i = 1;
    sum = 0;
    while(i<=n){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
        i++;
    }
    printf("Sum of series = %d\n", sum);
}