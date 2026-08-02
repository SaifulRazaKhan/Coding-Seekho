#include<stdio.h>
void IsPrime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            printf("%d is not a prime number\n",n);
            return; 
        }
        else{
            printf("%d is a prime number\n",n);
            return;
        }
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    IsPrime(n);
    return 0;
}