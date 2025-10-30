#include<stdio.h>
int main(){
    char fname[50];
    printf("Enter the name of a file ");
    scanf("%s",&fname);
    char ch;
    char a;
    int w_count=0;
    FILE *fp;
    fp=fopen(fname,"r");
    if(fp==NULL){
        printf("FIle Doesn'nt exixt");
    }
    else if ((ch!=' ')||(ch!='\0')){
        w_count++;
    }
    if(ch!=NULL){
        a++;
    }
    printf("WORDS COUNT =%d",w_count);
    printf("Char Count %d",a);
    fclose(fp);
    return 0;

}
