//my first c program
#include <stdio.h>

int main() {
    int i, j;

    printf("Numbers from 1 to 10 and their products:\n");

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");  // Separate each set of products by a new line
    }

    return 0;
}
