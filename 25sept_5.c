#include <string.h>
#include<stdio.h>

int main() {
    char str[100], word[20], longest[20];
    int i = 0, j = 0, len = 0, max = 0;

    printf("Enter a sentence:\n");
    fgets(str,sizeof(str),stdin);
    while(str[i] != '\0') {
        if(str[i] != ' ') {
            word[j] = str[i];
            j++;
        } else {
            word[j] = '\0';
            len = strlen(word);
            if(len > max) {
                max = len;
                strcpy(longest, word);
            }
            j = 0; 
        }
        i++;
    }
    word[j] = '\0'; 
    len = strlen(word);
    if(len > max) {
        max = len;
        strcpy(longest, word);
    }

    printf("Longest word is: %s\n", longest);
    printf("Length = %d\n", max);

    return 0;
}
