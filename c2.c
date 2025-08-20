#include<stdio.h>
int main(){
    printf("Enter a Character");
    char ch;
    scanf("%c",&ch);

    if(ch=='A'&&ch=='Z'){
        ch+=32;
        printf("%c",ch);

    }
    if(ch>='a'&&ch<='z'){
        ch=-32;
        printf("%c",ch);

    }
return 0;
} 