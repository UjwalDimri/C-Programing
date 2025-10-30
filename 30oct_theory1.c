#include<stdio.h>
int main(){
    char filename[100];
    printf("Enter the file name :");
    scanf("%s", filename);

    FILE *fp;
    int num = 0;
    fp = fopen(filename, "r");
    if (fp != NULL) {
        fscanf(fp, "%d", &num);
        fclose(fp);
    }

    num = num + 1;

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "%d", num);
    fclose(fp);
    printf("This is execution : %d", num);

    return 0;   
}
