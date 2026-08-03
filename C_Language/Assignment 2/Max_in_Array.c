#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter 5 elements of the array: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The maximum element in the array is: %d", max);
    return 0;
}