#include<stdio.h>
int Cube(int a){
    return a*a*a;
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Cube of %d is: %d\n",a,Cube(a));
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Cube of %d is: %d\n",a,Cube(a));
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Cube of %d is: %d\n",a,Cube(a));
    return 0;
}