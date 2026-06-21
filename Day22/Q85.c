#include <stdio.h>
#include<string.h>

int main(){
    char name[100], rev[100];
    int length;
    printf("enter the string");
    scanf("%s", name);
    length=strlen(name);

   
    for(int i=0;i<length;i++){
       rev[i]=name[length-1-i];
    }
    if(strcmp(name,rev) == 0){
        printf("the given string is palindrom");
    }
    else{
          printf("the given string is not a palindrom");
    }

    return 0;
}
