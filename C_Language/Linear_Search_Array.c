#include<stdio.h>
int main(){
    int arr[5],i;
    printf("Enter 5 elements of the array: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("The element of the array that you are searching for : ");
    int search;
    scanf("%d",&search);
    int found=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]==search)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Element found in the array.\n");
    }
    else
    {
        printf("Element not found in the array.\n");
    }
    return 0;
}