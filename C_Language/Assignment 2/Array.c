#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 elements of the array: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array are: ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}