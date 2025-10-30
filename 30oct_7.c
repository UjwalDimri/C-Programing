// WAP to find the largest word in a file
#include<stdio.h>
#include<string.h>
int main(){
    char fname[50];
    printf("Enter the name of a file ");
    scanf("%s",&fname);
    char ch;
    char w_count[1000];
    int i=0;
    int largest=0;
    FILE *fp;
    fp=fopen(fname,"r");
    char str1=fgetc(fp);
    if(fp==NULL){
        printf("FIle Doesn'nt exixt");
    }else{
        while(fscanf(fp,"%s",w_count)==1){
            int len = strlen(w_count);
            if (len>largest){
                largest=len;
            }
        }
    
         printf("%d",largest); 
    }
    fclose(fp);
    return 0;
}
