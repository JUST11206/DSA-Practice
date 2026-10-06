#include <stdio.h>

void selectionSort(int arr[], int n) {
    // Code here
    int temp;
    int min = 0;
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
    
int main(){
    int arr[] = {2,5,8,1,3,6};
    int n = 6;

    printf("Before sorting :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    selectionSort(arr,n);
    printf("\nAfter sorting :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
        }

