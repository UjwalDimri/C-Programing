//WAP to read only the numbers in a file and perform their addition.
//Assume numbers are written with spaces in a file.

#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("txt1.txt", "r");

    if (ptr == NULL) {
        printf("File does not exist.\n");
    }
    else{
    int num, sum = 0;
    while (fscanf(ptr, "%d", &num) == 1) {
        sum += num;
    }
    printf("Sum is: %d\n", sum);
}
    fclose(ptr);
    return 0;
}
