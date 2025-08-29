#include<stdio.h>
int main()
{
    int SI,P,T,R;
    printf("enter value of Principle time ");
    scanf("%d %d",&P,&T);
    R=80;
    SI=P*R*T/100;
    printf("Simple Intrest is :%d",SI);
    return 0;
}
     
