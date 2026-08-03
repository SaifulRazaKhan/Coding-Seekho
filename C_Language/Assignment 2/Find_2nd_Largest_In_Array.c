#include<stdio.h>
int main(){
    int arr[5],i,j;
    printf("Enter 5 elements of the array: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
    int max=arr[0];
    int max2=arr[0];
    for(j=0;j<5;j++){
        if(arr[j]>max){
            max2=max;
            max=arr[j];
        }
    }
    printf("The second largest element in the array is: %d\n", max2);break;
}}