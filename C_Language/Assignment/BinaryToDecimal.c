#include<stdio.h>
#include <math.h>

int main(){
    int n, num, sum=0;
    printf("Enter a binary number: ");
    scanf("%d",&n);
    num=n;
    int power=0;
    while(num>0){
        int digit = num%10;
        if(digit==1 || digit==0){
            sum=sum + digit*(int)pow(2,power);
            power++;
            num = num/10;
            }
        else{
            printf("Invalid binary number");
            return 0;
        }
    

}
        printf("Decimal equivalent: %d",sum);
}