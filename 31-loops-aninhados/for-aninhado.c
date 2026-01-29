#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("\n");
            printf("%d\t", i);
            printf("%d\t", j);
            printf("%d\t", i * j);
        }
        
        printf("\n");

    }
    return 0;
}