#include <stdio.h>
#include <stdlib.h>

int main() {
int *arr, n, i, sum = 0;

// Get number of elements in the array from user
printf("Enter the number of elements in the array: ");
scanf("%d", &n);

// Dynamically allocate memory for the array
arr = (int *)malloc(n * sizeof(int));
if (arr == NULL) {
printf("Error: Unable to allocate memory.\n");
return 1;
}

// Get values for the array from user
printf("Enter the values for the array:\n");
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

// Calculate sum of all values in the array
for (i = 0; i < n; i++) {
sum += arr[i];
}

// Print the sum of all values in the array
printf("The sum of all values in the array is: %d\n", sum);

// Deallocate memory used by the array
free(arr);

return 0;
}