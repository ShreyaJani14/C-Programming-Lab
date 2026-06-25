#include <stdio.h>
#include "string.h"
void main(){
int i = 0;
char str1[100],dest[100],str2[100];
printf("Enter string 1: ");
gets(str1);
printf("Enter string 2: ");
gets(str2);
while (str1[i] != '\0')
    {
        i++;
    }
printf("Length of the string is: %d\n", i);
i = 0;
while (str1[i] != '\0') 
    {
        dest[i] = str1[i];
        i++;
    }
    dest[i] = '\0';
printf("Copied String: %s\n", dest);
i = 0;
int res=0;
while (str1[i] != '\0' && str2[i] != '\0') 
    {
        if (str1[i] != str2[i])
        {
            res=str1[i] - str2[i];
        }
        i++;
    }
    if(res==0 && str1[i]=='\0' && str2[i]=='\0'){
        printf("Strings are equal\n");
    }
    else if(res==0){
        if(str1[i]=='\0'){
            printf("String 1 is less than String 2\n");
        }
        else{
            printf("String 1 is greater than String 2\n");
        }
    }
    else if(res<0){
        printf("String 1 is less than String 2\n");
    }
    else{
        printf("String 1 is greater than String 2\n");
    }
}