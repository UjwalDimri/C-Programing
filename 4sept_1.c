#include<stdio.h>
int main(){
    int a ; int b;
    printf("Enter any two numbers :");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if (i%2==0){
            printf(" even %d = %d \t \n",i,i*i);
        }else {
            printf(" odd %d = %d\t",i,i*i*i);
        }

    }  
    return 0;  

}