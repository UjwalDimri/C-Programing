#include<stdio.h>
int main(){
    char fname[50];
    printf("Enter the name of a file ");
    scanf("%s",&fname);
    char ch;
    FILE *fp;
    fp=fopen(fname,"r");
    if(fp==NULL){
        printf("FIle Doesn'nt exixt");
    }else{
       while((ch=fgetc(fp))!=EOF){
          printf("%c",ch);
        }
    }
    fclose(fp);
    return 0;
}
