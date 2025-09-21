// WAP to display matrices multiplication 
#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],multi[3][3],i,j,a;
    printf("Enter elements for first 3X3 matrix(9 elements): ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",arr1[i][j]);
        }
    }
    printf("Enter another 9 elemnts for second matrix(3X3):");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",arr2[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(a=0;a<3;a++){
                multi[i][j]+=arr1[i][a]*arr2[a][j];
            }
        }
    }
    printf("Matrix Multiplication =\n");
     for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",multi[i][j]);
        printf("\n");
        }
     }
}
