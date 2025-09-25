#include<stdio.h>
 int fact(int);
 int main(){
 int x=fact(3)+fact(2)+fact(1);
 printf("fatorial of 3: %d",x);
 
 }
 int fact(int n){
     int fact=1;
     fact=fact*n;
     return fact;
 }
