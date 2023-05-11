#include <stdio.h>
#include <stdlib.h>

// Function to create an array of the first n Fibonacci numbers
int* Fibonacci(int n) {
    // Allocate memory for the array of size n
    int* arr = (int*)malloc(n * sizeof(int));
    
    // Set the first two values in the array to 0 and 1
    arr[0] = 0;
    arr[1] = 1;

    // Compute the remaining values using the Fibonacci sequence
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // Return the completed array
    return arr;
}

// Function to create an array of the squares of the integers from 1 to n
int* Squares(int n) {
    // Allocate memory for the array of size n
    int* arr = (int*)malloc(n * sizeof(int));

    // Compute the squares of the integers from 1 to n
    for (int i = 1; i <= n; i++) {
        arr[i - 1] = i * i;
    }

    // Return the completed array
    return arr;
}

// Function to concatenate two arrays into a new array
int* Concatenate(int* array1, int size1, int* array2, int size2) {
    // Allocate memory for the new array of size size1 + size2
    int* arr = (int*)malloc((size1 + size2) * sizeof(int));

    // Copy the elements of array1 into the new array
    for (int i = 0; i < size1; i++) {
        arr[i] = array1[i];
    }

    // Copy the elements of array2 into the new array after the elements of array1
    for (int i = 0; i < size2; i++) {
        arr[i + size1] = array2[i];
    }

    // Return the completed array
    return arr;
}

// Function to print the contents of an array to the console
void PrintArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main program
int main() {
    // Read in the sizes of the Fibonacci and squares sequences
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    // Create the Fibonacci and squares arrays using the respective functions
    int* fibArr = Fibonacci(n1);
    int* sqrArr = Squares(n2);

    // Concatenate the two arrays using the Concatenate function
    int* concatArr = Concatenate(fibArr, n1, sqrArr, n2);

    // Print the three arrays using the PrintArray function
    PrintArray(fibArr, n1);
    PrintArray(sqrArr, n2);
    PrintArray(concatArr, n1 + n2);

    // Free the memory allocated for the arrays using the free function
    free(fibArr);
    free(sqrArr);
    free(concatArr);

    // End the program
    return 0;
}
