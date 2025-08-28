#include<stdio.h>
int main(){
    int a; int b;int i;
    printf("Enter any two numbers :");
    scanf("%d %d",&a,&b);
    for ( i = a;i<=b;i++){
        if ( (i%2!=0))
          printf(" Numbers are : %d",i);

        }
   
     return 0;
}