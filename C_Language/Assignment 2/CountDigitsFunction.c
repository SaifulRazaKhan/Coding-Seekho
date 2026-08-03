#include<stdio.h>
void CountDigits(long long n){
    long long count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("Number of digits in the given number is: %lld\n",count);
}
int main(){
    long long n;
    printf("Enter a number: ");
    scanf("%lld",&n);
    CountDigits(n);
    return 0;
}