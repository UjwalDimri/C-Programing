#include<stdio.h>
int main(){
    printf("Enter Two Numbers: ");
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a>=b){
        if((a%2==0)){
            printf("%d %d",a,(a-b));
        }
    }    
    if(b>a){
        if((b%2)==0){
            printf("%d %d",b,(b-a));
        }
    }
    else{
        printf("your numbers are not a even numbers");

    }
  return 0;
}
