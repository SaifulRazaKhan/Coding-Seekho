#include<stdio.h>
void Swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}   
int main(){
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);
    Swap(&a,&b);
    printf("After Swapping: a=%d b=%d\n",a,b);
    return 0;
}