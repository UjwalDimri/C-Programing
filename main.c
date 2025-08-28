# include<stdio.h>

int main() {
    printf("enter your no. of calls");
    int nc;
    scanf("%d",&nc);

    if(nc<=75){
      int bill = nc*0;
      printf("your bill is :%d rs",bill);
    }

    if(nc>75&&nc<=200){
       int bnc = nc-75;
       int bill_1=bnc*1;
       printf("your bill is : %d rs",bill_1);
    }

    if(nc>200&&nc<=300){
        int bnc = nc-200;
        int bill_2= bnc*2+125;
        printf("your bill is : %d rs",bill_2);

    }
    if(nc>300&&nc<=400){
        int bnc = nc-300;
        int bill_3=bnc*3+225;
        printf("your bill is : %d rs",bill_3);
    }

    
    if(nc<400){
      int bnc = nc-400;
      int bill_4 = bnc*4+525;
      printf("your bill is : %d rs",bill_4);
    }
return 0;
}