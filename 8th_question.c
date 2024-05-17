#include <stdio.h>

int main() {
    int rows = 8, cols = 8;

    for (int i = 0; i < rows; i++) {
        printf("%c", (i % 2 == 0) ? '*' : ' ');

        for (int j = 1; j < cols; j++) {
            printf("%c", (i % 2 == 0) ? ' ' : '*');
        }

        printf("\n");  
    }

    return 0;
}
