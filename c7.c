#include<stdio.h>
int main(){
    int i;
    
    int sum =0;
    for(i=1;i<=7;i++){
        sum=sum+1/i;
    }
    printf("%d",sum);
     
}