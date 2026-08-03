#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements of the array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int position;
    printf("Enter the position of the element to be deleted (1 to %d): ",n);
    scanf("%d",&position);
    if(position<1 || position>n){
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
        return 1;
    }
    for(i=position-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    printf("Array after deleting the element: ");
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}