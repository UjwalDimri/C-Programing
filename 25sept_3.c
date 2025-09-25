//wap rea sen and replace lowercase char with uppercase char and vise versa 
#include<stdio.h>
#include<string.h>
int main(){
    char str[300];
    int i,alphacount=0,digitcount=0,spec_count=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    printf("Before:%s",str);
    for(i=0;i!='\0';i++){
        if((str[i]>='a')&&str[i]<='z'){
            str[i]=str[i]-32;
        }else if((str[i]>='A')&&(str[i]>='Z')){
            str[i]=str[i]+32;
        }
    }
    printf("Changed:%s",str);

}
