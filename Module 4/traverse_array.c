// 3. Create a fixed array and use pointers to transverse through elements and print the output.
#include <stdio.h>

int main() {
int arr[] = { 1, 2, 3, 4, 5 };
int *ptr = arr; // Initialize pointer to first element of array
int i;

// Print array elements using pointer
for (i = 0; i < 5; i++) {
printf("%d ", *ptr);
ptr++; // Increment pointer to point to next element
}
printf("\n");

return 0;
}