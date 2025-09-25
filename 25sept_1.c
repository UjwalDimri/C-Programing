//count tot num of words in string
#include<stdio.h>
#include<string.h>
int main(){
    char str[300];
    int i,w_count=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
     for(i=0;str[i]!='\0';i++){
        if(str[i]==' '&&str[i+1]!=' '&&str[i+1]!='\0'){
          w_count++;
        }
     }
     if(strlen(str)>0){
        w_count++;
     }
     printf("Total words count = %d",w_count);

     return 0;


}
