#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int n1=0,n2=1,n3,i,number;
    for(i=2;i<13;i++){
        n3=n1+n2;
        if (n3==n){
            printf("Given number is in fibonacci series ");
        } else {
            printf("Given number is not fibonacci series ");
        }
        n1=n2;
        n2=n3;

    }
    return 0;
    
}