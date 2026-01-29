#include <stdio.h>
 
int main() {
    int i = 1;
    do {
        int j = 1;
        
        do {
            printf("\n");
            printf("%d\t", i);
            printf("%d\t", j);
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        
        printf("\n");
        i++;

    } while (i <= 10);
    return 0;
}