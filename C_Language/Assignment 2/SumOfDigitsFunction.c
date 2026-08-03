#include<stdio.h>
void SumOfDigits(int a){
    int sum=0,n,b=a;
    while(a>0){
        n=a%10;
        sum = sum + n;
        a=a/10;
    }
    printf("Sum of digits of %d is: %d\n",b,sum);
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    SumOfDigits(a);
    return 0;
}