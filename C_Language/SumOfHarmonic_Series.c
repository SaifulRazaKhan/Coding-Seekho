#include<stdio.h>
int main(){
    float a,sum=0;
    printf("Enter a number: ");
    scanf("%f",&a);
    for(int i=1.0;i<=a;i++){
        sum=sum+(1.0/i);
    }
    printf("Sum = %f",sum);
}