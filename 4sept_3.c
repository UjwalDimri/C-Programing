#include <stdio.h>

int main() {
    for (int i = 2; i <= 20; i++) {
        int count = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                printf("%d",i);
                count++;
            }
        }
        if (count > 0) {
            printf("%d  prime\n", i);
        } else {
            printf("%d is not prime\n", i);
        }
    }
    
    return 0;
}