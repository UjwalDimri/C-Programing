#include<stdio.h>
int main(){  
printf("Enter your basic salary : ");
int bp;
scanf("%d",&bp);
float HRA = bp*0.3;
float DA= bp*0.2;
float intensive=7000.0;
int lr=14000;
float gross_salary=HRA+DA+intensive+bp;

float ct= bp*0.1;
float netsalary= gross_salary-lr-ct;
printf("your net salary : %f",netsalary);
printf("your gross salary : %f",gross_salary);
return 0;

}