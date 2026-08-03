#include<stdio.h>
int GCD(int a,int b){
    int gcd = 1;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}
int main(){
    int a,b;
    printf("ENter two numbers to find GCD:");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is: %d\n",a,b,GCD(a,b));
    return 0;
}