#include <stdio.h>
#include<string.h>


int main(){
    char name[100] = "teerthraj pandey";
    int size=0;

    while(name[size]!='\0'){
        size++;
    }
    printf("the size of string is %d\n", size);
    
    return 0;
}
