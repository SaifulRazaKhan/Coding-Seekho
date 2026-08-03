#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n); 
    printf("Enter %d elements of the array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int element,position;
    printf("Enter the element to be inserted: ");
    scanf("%d",&element);
    printf("Enter the position where the element should be inserted (1 to %d): ",n+1);
    scanf("%d",&position);
    if(position<1 || position>n+1){
        printf("Invalid position! Please enter a position between 1 and %d.\n", n+1);
        return 1; // Exit the program with an error code
    }
    for(i=n;i>=position;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=element;
    printf("Array after inserting the element: ");
    for(i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}