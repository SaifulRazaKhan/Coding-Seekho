#include<stdio.h>
int main(){
    float arr[5];
    int i;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%f",&arr[i]);
    }
    printf("The average of the numbers in the array is: ");
    float sum=0;
    for(i=0;i<5;i++){
        sum+=arr[i];
    }
    printf("%f\n", sum/5);
    return 0;
}