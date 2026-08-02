#include<stdio.h>
 int Add(int a,int b){
    return a+b;
}
int main(){
    int a,b,sum;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    sum = Add(a,b);
    printf("Sum of %d and %d is: %d\n",a,b,sum);
    return 0;
}