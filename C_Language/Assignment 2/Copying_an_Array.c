#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter 5 elements of the array: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[5];
    for(i=0;i<5;i++){
        arr2[i]=arr[i];
    }
    printf("Elements of the copied array: ");
    for(i=0;i<5;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}