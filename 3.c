//WAP to display all the prime numbers between 1 and 20
#include<stdio.h>
int main(){ 
    int count =0;
    for(int i=1;i<=20;i++){
        for(int j =2 ;j<i/2 ;j++){
            if(i%j==0){
            printf("%d",&i);
            }


        }
        
        
    }

}