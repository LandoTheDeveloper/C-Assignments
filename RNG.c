#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int max_val, num_vals, i, j, temp;
    printf("Enter the maximum value: ");
    scanf("%d", &max_val);
    printf("Enter the number of values: ");
    scanf("%d", &num_vals);

    if (num_vals > max_val) {
        printf("Error: number of values cannot exceed maximum value.");
        return 1;
    }

    int *arr = (int *) malloc(max_val * sizeof(int));

    // Initialize array with values 1 to max_val
    for (i = 0; i < max_val; i++) {
        arr[i] = i + 1;
    }

    // Shuffle the array
    srand(time(NULL));
    for (i = max_val - 1; i > 0; i--) {
        j = rand() % (i + 1);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print the first num_vals elements of the shuffled array
    printf("Random values: ");
    for (i = 0; i < num_vals; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
