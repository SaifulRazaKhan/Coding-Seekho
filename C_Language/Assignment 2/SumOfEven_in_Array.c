#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter 5 elements of the array: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    printf("Sum of even elements in the array: %d",sum);
    return 0;
}