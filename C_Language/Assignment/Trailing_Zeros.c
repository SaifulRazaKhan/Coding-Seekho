#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++){
        if(i%5==0){
            count++;
        }
    }
    printf("Trailing zeros in %d! = %d",n,count);
}