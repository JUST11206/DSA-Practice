#include <stdio.h>

int main() {

    int arr[100];

    int n, position, value;

    // Size Input

    printf("Enter Size of Array: ");

    scanf("%d", &n);

    // Elements Input

    printf("Enter %d Elements:\n", n);

    for(int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);

    }

    // Position Input

    printf("Enter Index Position to Insert: ");

    scanf("%d", &position);

    // Value Input

    printf("Enter Value: ");

    scanf("%d", &value);

    // Right Shift

    for(int i = n; i > position; i--) {

        arr[i] = arr[i - 1];

    }

    // Insert Value

    arr[position] = value;

    // Increase Size

    n++;

    // Print Array

    printf("\nArray After Insertion:\n");

    for(int i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    return 0;

}