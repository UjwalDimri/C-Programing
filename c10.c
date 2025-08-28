#include<stdio.h>
int main (){
    int vote;
    int a=0 ,b=0 ,c=0;

    printf("Enter 1 for sam \n Enter 2 for ram \n Enter 3 for shiv ");
    scanf("%d",&vote);
    switch(n){
        case 1 :
               printf("you voted for Sam :");
                a=a+1;
                break;
        case 2 :
               printf("you voted for Ram :");
               b=b+1;
                break ;
        case 3 :
               printf("you voted for Shiv :");
               c=c+1;
               break; 
    } 
    if ((a>b)&&(a>b)){
        printf(" Sam is the winner !! ");
    }  else if ((b>a)&&(b>c)){
        printf("Ram is the winner !!");
    } else if ((c>a)&&(c>b)){
        printf("Shiv is the winner !!");
    }
    return 0;
}
