#include<stdio.h>
int main(){
    int a,b,i,gcd,lcm;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
        else{
            continue;
        }
    }
    lcm=(a*b)/gcd;
    printf("GCD of %d and %d = %d\n",a,b,gcd);
    printf("LCM of %d and %d = %d",a,b,lcm);
    return 0;
}