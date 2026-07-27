#include<stdio.h>
int main(){
    int a;
    printf("Enter a number to start Collatz Sequence: ");
    scanf("%d",&a);
    while(a>1){
        if(a%2==0){
            printf("%d -> ",a);
            a=a/2;
        }
        else if(a%2!=0){
            printf("%d -> ",a);
            a=3*a+1;
        }
    }
    printf("1");
}