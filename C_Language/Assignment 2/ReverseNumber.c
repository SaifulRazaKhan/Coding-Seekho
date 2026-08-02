#include<stdio.h>
void reserveNumber(int n){
    int rev=0,rem;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reversed number is: %d\n",rev);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    reserveNumber(n);
    return 0;
}