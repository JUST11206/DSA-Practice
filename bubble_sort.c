// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

   int arr[] = {1,7,3,2,5};
    printf("Array :");
     for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
        
    }
    //bubble sort

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
            }
        }
    }
    printf("\nSorted array :");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
        
    }
    return 0;
}