#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter 5 elements of the array: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=1;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The minimum element in the array is: %d", min);
    return 0;
}