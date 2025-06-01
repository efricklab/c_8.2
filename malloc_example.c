#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    numbers = (int *)malloc(n * sizeof(int));

    // Check if malloc returned NULL (allocation failed)
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read values into the allocated memory
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the entered values
    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    printf("\nSum of all elements: %d\n", sum);

    // Free the allocated memory
    free(numbers);

    return 0;
}
