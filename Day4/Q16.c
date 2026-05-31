 #include<stdio.h>
 #include<math.h>
 int main(){
    int n, n1, n2, remainder, count, i, result;

    printf("enter the range to print all armstrong number");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        count=0;
        result=0;
    n1=i;
    n2=i;

    while(n1>0){
      n1=n1/10;
      count++;
    }
    while(n2>0){
      remainder=n2%10;
      result = result + pow(remainder, count);
      n2=n2/10;
    }
if(result==i){
    printf("%d ", i);
}
}
    return 0;
 }