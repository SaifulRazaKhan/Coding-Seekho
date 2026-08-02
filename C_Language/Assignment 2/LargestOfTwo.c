#include<stdio.h>
int largest(int a,int b){
    if(a>b){
        printf("%d is largest",a);
    }
    else if(a==b){
        printf("Both numbers are equal");
    }
    else{
        printf("%d is greatest",b);
    }
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    largest(a,b);
    return 0;
}