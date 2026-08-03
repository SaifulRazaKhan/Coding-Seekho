#include<stdio.h>
void Power(int a,int b){
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    printf("%d raised to the power %d is: %d\n",a,b,power);
}
int main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    Power(a,b);
    return 0;
}