#include<stdio.h>
int isArmstrong(int n){
    int sum=0,temp=n,rem;
    while(n!=0){
        rem=n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    if(sum == temp){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(isArmstrong(n)){
        printf("%d is an Armstrong number\n",n);
    }
    else{
        printf("%d is not an Armstrong number\n",n);
    }
    return 0;
}