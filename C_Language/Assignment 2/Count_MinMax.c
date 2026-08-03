#include<stdio.h>
void MinMax(int arr[100],int n){
    int min=arr[0],max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
}
int main(){
    int arr[100],n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements of the array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    MinMax(arr,n);
    return 0;
}