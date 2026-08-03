#include<stdio.h>
void EvenOdd(int arr[100],int n){
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
}
int main(){
    int arr[100],i,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements of the array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    EvenOdd(arr,n);
    return 0;
}