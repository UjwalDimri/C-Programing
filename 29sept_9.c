//wap rea sen and replace lowercase char with uppercase char and vise versa 
#include<stdio.h>
#include<string.h>
char lowupp(char);
int main(){
    char str[300];
   
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Before:%s",str);
    lowupp(str[300]);
}
char lowupp(char str[]){
    int i;
    for(i=0;i!='\0';i++){
        if((str[i]>='a')&&str[i]<='z'){
            str[i]=str[i]-32;
        }else if((str[i]>='A')&&(str[i]>='Z')){
            str[i]=str[i]+32;
        }
    }
    printf("Changed:%s",str);
}
