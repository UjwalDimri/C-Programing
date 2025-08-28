#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter any 4 no.");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if ((a>b)&&(a>c)&&(a>d)){
        printf("%d",a);

    }
    else if ( (b>a)&&(b>c)&&(b>d)){
        printf("%d",b);

    }
    else if ((c>a)&&(c>b)&&(c>d)){
        printf("%d",c);

    }
    else if((d>a)&&(d>b)&&(d>a)) {
        printf("%d",d);

    }
    else {
        printf ("enter four diff nos.");
    }
    return 0;
}