#include<stdio.h>
int main(){
    int arr[100],n,sum=0,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements of the array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
}
    printf("The sum of the elements in the array is: %d",sum);
    return 0;
}