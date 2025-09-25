//check if a string is palindrome
#include<stdio.h>
#include<string.h>
int main(){
    char str[200] ,count=0;
    int i;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            count++;
            break;
        }

    }
    if(count==1){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome \n");
    }
    return 0;



}
