 #include<stdio.h>
 #include<math.h>
 int main(){
    int n, n1, n2, remainder, count=0, i, result=0;

    printf("enter the number to check armstrong or not");
    scanf("%d", &n);
    n1=n;
    n2=n;

    while(n1>0){
      n1=n1/10;
      count++;
    }
    while(n2>0){
      remainder=n2%10;
      result = result + pow(remainder, count);
      n2=n2/10;
    }
    if(result==n){
      printf("the given number is armstrong number");

    }
    else{
      printf("the given number is not armstrong number");
  }
    return 0;
 }