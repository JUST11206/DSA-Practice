#include <stdio.h>

// Create initial array
void createArr(int arr[], int size, int *n) {

    printf("Enter number of Elements: ");
    scanf("%d", n);

    if (*n > size) {
        printf("Number of elements cannot be greater than size.\n");
        *n = size;
    }

    for (int i = 0; i < *n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Enqueue = insert at rear
void enqueue(int arr[], int size, int *front, int *rear, int item) {

    // Queue full
    if (*rear == size - 1) {
        printf("\nQueue is Full\n");
        return;
    }

    // Empty queue
    if (*front == -1) {
        *front = 0;
    }

    (*rear)++;
    arr[*rear] = item;
}

int main() {

    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    int n;

    createArr(arr, size, &n);

    // Initialize queue
    int front = 0;
    int rear = n - 1;

    printf("\nQueue: ");

    for (int i = front; i <= rear; i++) {
        printf("%d ", arr[i]);
    }

    int item = 99;

    enqueue(arr, size, &front, &rear, item);

    printf("\nQueue after enqueue: ");

    for (int i = front; i <= rear; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}