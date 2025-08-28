#include<stdio.h>
int main(){
    int a; int b;int i;int c=0;int sum =0;
    printf("Enter any two numbers :");
    scanf("%d %d",&a,&b);
    for ( i = a;i<=b;i++){
        if ( (i%2!=0)&&(c<=12)){
          sum=sum+i;
          c=c+1;
        }

    }
    printf(" Numbers are : %d",sum);
   
    return 0;
}