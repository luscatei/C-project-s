#include <stdio.h>

int main(){
    /*
        Print a tree.
    */ 

    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    printf("  /|\\\n");

    int tree = 0;

    /*
        I built a dynamic version of the program above with user input implementation, input type validation, and dynamic printing of the tree size based on the input. Using loops like 'do while' and 'for,' I defined the display.
    */
    do {
        printf("Insert the size of the tree: ");
        if (scanf("%i", &tree) != 1){   // Verify the input.
            printf("Invalid input. Try again\n");
            while (getchar() != '\n');  // Clear keybord buffer.
        }
    } while (tree <= 0);                // Run the program if the input is invalid.
    for (int i = 1; i <= tree; i++) {
        
        for (int j = 0; j < tree - i; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 0; i < tree / 3; i++) {
        for (int j = 0; j < tree - 2; j++) {
            printf(" ");
        }
        printf("| |\n");
    }

    printf("\n");


    return 0;
}