// WAP to create a voting system. to accept a vote untill user presses n and display the count of votes for each candidates
#include<stdio.h>
int main (){
    int vote;
    int a=0 ,b=0 ,c=0;char ch; 
    printf("Do you want to cast a vote (y/n)");
    scanf("%c",&ch);
        while(ch=='y'){

            printf("Enter 1 for sam \n Enter 2 for ram \n Enter 3 for shiv ");
            scanf("%d",&vote);
            switch(vote){
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
             printf("cast vote again :(y/n)");
             scanf("%c",&ch);
           
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