#include<stdio.h>
void SI(float p,float r,float t){
    float si;
    si=(p*r*t)/100.0;
    printf("Simple Interest is: %.2f\n",si);
}
int main(){
    float p,r,t;
    printf("Enter the value of Principal, Rate and Time: ");
    scanf("%f%f%f",&p,&r,&t);
    SI(p,r,t);
    return 0;
}