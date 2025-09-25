//count the total no of alpha digits and special char inn strig
#include<stdio.h>
#include<string.h>
int main(){
    char str[300];
    int i,alphacount=0,digitcount=0,spec_count=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
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
