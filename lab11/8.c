#include <stdio.h>
void main() {
    int i;
    printf("ASCII Characters and their Values:\n");
    for (i = 0; i <=127; i++) 
    {
        printf("Value: %3d  Character: %c\n", i, i);
    }
}
