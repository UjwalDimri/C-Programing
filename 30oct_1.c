#include<stdio.h>
int main(){
    char fname[50];
    printf("Enter the name of a file ");
    scanf("%s",&fname);
    FILE *fp;
    char ch;
    int count =0;
    fp=fopen(fname,"r");
    if(fp==NULL){
        printf("file does'nt exist");
    }else{
       while((ch=fgetc(fp))!=EOF){
        count++;
         }
         if(count>1){
            printf("file is not empty");
         }
         else if(count<=1){
            printf("FIle is empty:");
         }
    }
    fclose(fp);
    return 0;
}
