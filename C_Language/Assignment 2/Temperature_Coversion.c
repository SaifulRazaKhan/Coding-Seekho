#include<stdio.h>
float celciusFahrenheit(float c){
    return (c * 9.0/5.0) + 32;
}
int main(){
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);
    printf("%.2f Celcius = %.2f Fahrenheit\n",c,celciusFahrenheit(c));
    return 0;
}