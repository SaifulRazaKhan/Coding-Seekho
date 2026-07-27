#include<stdio.h>
int main(){
    int n;
    printf("Enter a number between 0 to 10: ");
    do{
        scanf("%d",&n);
        if(n<=0 || n>10){
            printf("Invalid!!");
        }
    }
    while(n<=0 || n>10);
    printf("Valid Input.");
    return 0;
    }

