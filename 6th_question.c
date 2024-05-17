#include <stdio.h>

void print_box(int rows, int columns) {
    // Print upper border
    for (int i = 0; i < columns; i++) {
        printf("*");
    }
    printf("\n");

    // Print side walls and inner space
    for (int i = 0; i < rows - 2; i++) {
        printf("*");
        for (int j = 0; j < columns - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    // Print lower border
    for (int i = 0; i < columns; i++) {
        printf("*");
    }
    printf("\n");
}

void print_pyramid(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print asterisks
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print hollow pyramid
void print_hollow_pyramid(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print first half asterisks
        for (int j = 0; j < i; j++) {
            printf("*");
        }

        // Print spaces in the middle
        if (rows > 1) {
            printf("  ");  // Adjust spacing for better output
        }

        // Print second half asterisks (excluding the middle one for hollow)
        for (int j = i - (rows > 1 ? 1 : 0); j >= 0; j--) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print a right-angled triangle
void print_right_angled_triangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print a left-angled triangle
void print_left_angled_triangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;

    // Get user input for box dimensions (if needed)
    printf("Enter the number of rows for the box (optional, press enter for default 5): ");
    scanf("%d", &rows);
    if (rows <= 0) {
        rows = 5;  // Set default value if input is invalid
    }

    printf("Enter the number of columns for the box (optional, press enter for default 5): ");
    scanf("%d", &columns);
    if (columns <= 0) {
        columns = 5;  // Set default value if input is invalid
    }

    // Get user input for number of rows for shapes (pyramid, hollow pyramid, etc.)
    printf("Enter the number of rows for the shapes (pyramid, hollow pyramid, etc.): ");
    scanf("%d", &rows);
    if (rows <= 0) {
        rows = 5;  // Set default value if input is invalid
    }

    // Print the box
    printf("\nBox:\n");
    print_box(rows, columns);

    // Print the pyramid
    printf("\nPyramid:\n");
    print_pyramid(rows);

    // Print the hollow pyramid
    printf("\nHollow Pyramid:\n");
    print_hollow_pyramid(rows);

    // Print the right-angled triangle
    printf("\nRight-angled Triangle:\n");
    print_right_angled_triangle(rows);

    // Print the left-angled triangle
    printf("\nLeft-angled Triangle:\n");
    print_left_angled_triangle(rows);
}

    
