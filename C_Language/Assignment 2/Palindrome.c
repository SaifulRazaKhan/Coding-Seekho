#include<stdio.h>
void Palindrome(int n){
    int rev=0,rem;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==n){
        printf("The number is a palindrome\n");
    }
    else{
        printf("The number is not a palindrome\n");
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    Palindrome(n);
    return 0;
}