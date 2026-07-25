#include<stdio.h>
int main(){
    int n, num, sum=0;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    num=n;
    int power=0;
    while(num>0){
        int digit = num%2;
        if(digit==1 || digit==0){
            sum=sum + digit*(int)pow(10,power);
            power++;
            num = num/2;
            }
        else{
            printf("Invalid number");
            return 0;
        }  
    }
    printf("Decimal equivalent: %d",sum);
}