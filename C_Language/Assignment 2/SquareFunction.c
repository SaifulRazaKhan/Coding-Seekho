#include<stdio.h>
int Square(int a){
    return a*a;
}
int main(){
    int a,sq;
    printf("Enter a number: ");
    scanf("%d",&a);
    sq= Square(a);
    printf("Square of %d is: %d\n",a,sq);       
    return 0;
}