//WAP to display the sum of two arrays
#include<stdio.h>
int main(){
    int n,x,a,i;
    printf("Enter how many elements do you want to enter in array 1 and array 2:");
    scanf("%d ",&n);
   
    int arr1[n],arr2[n],sum[i];
      for(int i=0;i<n;i++){
        printf("Enter element for first array:");
        scanf("%d",&arr1[i]);
       }
       for(int i=0;i<n;i++){
        printf("Enter element for Second array:");
        scanf("%d",&arr2[i]);
       }
       for(int i=0;i<n;i++){
        sum[i]=arr1[i]+arr2[i];
       }
       printf("Sum = \n");
       for(i=0;i<n;i++){
        printf("%d",sum[i]);
       }
       
       return 0;
        

   
}
