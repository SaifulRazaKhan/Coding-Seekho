#include<stdio.h>
int main(){
    int n,a,b=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int c=n;
    while(n>0){
        a=n%10;
        for(int i=a;i>0;i++){
            b=b*i;
            a--;
        }
        sum=sum+b;
        n=n/10;
    }
    if(sum==c){
        printf("%d is a Strong Number.",c);
    }
    else{
        printf("%d is not a Strong number.",c);
    }
    return 0;
}