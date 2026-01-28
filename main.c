#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;
    int n = 0;
    int i;

    // asks the user how many numbers they want to enter
    printf("how many numbers do you want to enter? ");
    scanf("%d", &n);

    // Check if number is valid
    if (n <= 0) {
        printf("please enter a positive number.\n");
        return 0;
    }

    // Allocate memory for the array
    array = (int *)malloc(n * sizeof(int));

    // Check if malloc worked
    if (array == NULL) {
        printf("memory allocation failed\n");
        return 1;
    }

    // Get numbers from user
    printf("enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Print numbers in reverse
    printf("numbers in reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the memory
    free(array);

    return 0;
}
