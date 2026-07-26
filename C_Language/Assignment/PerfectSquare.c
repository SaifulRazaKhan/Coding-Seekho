#include<stdio.h>
int main(){
int a,i,c,count=0;
printf("\nEnter a number to check if it is A Perfect Square:  ");
scanf("%d",&a);
c=a;
for(i=0;i<=a;i++){
    c=i*i;
    if(c==a){
        count++;
    }
    else{
        continue;
}
}  
if(count==1){
    printf("The number %d is a Perfect Square",a);
} 
else{
    printf("The number %d is not a Perfect Square",a);
}
}   