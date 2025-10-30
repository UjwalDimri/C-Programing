#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen(txt1.txt,"w");
    int num=1234;
    fprintf(fp,"%d",num);
    fclose(fp);
    fp=fopen(txt1.txt,"r");
    int num1;
    fscanf(fp,"%d",&num1);
    fclose(fp);
    fp=fopen(txt2.txt,"w");
    fprintf(fp,"%d",num1);
    fclose(fp);
    fp=fopen(txt2.txt,"r");
    int num2;
    fscanf(fp,"%d",&num2);
    printf("The  number is: %d\n",num2);
    fclose(fp);
    return 0;
