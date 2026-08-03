#include<stdio.h>
int main(){
    int arr[10],i,n,count=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements of the array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to count its occurrences: ");
    int search;
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            count++;
        }
    }
    printf("The element %d occurs %d times in the array.\n",search,count);
    return 0;
}