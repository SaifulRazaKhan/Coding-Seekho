#include<stdio.h>

int fact(int x){
    if(x==0 || x==1){
        return 1;
    }
    return x * fact(x-1);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            int iCj= fact(i) /(fact(j) * fact(i-j));
            printf("%d ",iCj);
            }
            printf("\n");
        }
    }

    