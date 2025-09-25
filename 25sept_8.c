//count the total no of alpha digits and special char inn strig
#include<stdio.h>
#include<string.h>
char ad(char);
int main(){
    char str[300];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    ad(str[300]);
}
char ad(char str[]){
    int i,alphacount=0,digitcount=0,spec_count=0;
    for(i=0;str[i]!='\0';i++){
        if((str[i]>='A')&&(str[i]<='Z')||(str[i]>='a')&&str[i]<='z'){
          alphacount++;
        }
        else if((str[i]>='0')&&str[i]<='9'){
            digitcount++;
        }else{
            spec_count++;
        }
    }
    printf("Total Alphabets =%d\n",alphacount);
    printf("Total Digits count =%d\n",digitcount);
    printf("Total special charcter=%d\n",spec_count);
    return 0;
}

