// WAP to check given character is vowel or consonant 
#include<stdio.h>
int main(){
    char x;
    printf("Enter any character :");
    scanf("%c",&x);
    if ((x=='a')||(x=='A')||(x=='e')||(x=='E')||(x=='i')||(x=='I')||(x=='o')||(x=='O')||(x=='u')||(x=='U')){
        printf("Its a vowel ");
    } else {
        printf("Consonant");
    }
    return 0;
} 