#include<stdio.h>
float Average(float a, float b, float c){
    return (a + b + c) / 3.0;
}
int main(){
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    printf("Average: %.2f\n", Average(a, b, c));
    return 0;
}