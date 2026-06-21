#include <stdio.h>
#include<string.h>

int main(){
    char name[100], rev[100];
    int length;
    printf("enter the string");
    scanf("%s", name);
    length=strlen(name);

    printf("the reversve of the string is:");
    for(int i=length-1;i>=0;i--){
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}