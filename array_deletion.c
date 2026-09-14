#include <stdio.h>

int main(){
    int arr[100] = { 1,2,3,4,5};
    int n = 5;
    printf("Array : ");
    //traverse array
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    //Let suppose i want delete a last element in the erray
    int del = 1;

    for(int i=del;i<n-1;i++){
        arr[i] = arr[i+1]; //Logic here1
    }

    n--; //Logic here
    
    
    printf("\nAfter Deletion array is :");
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    
return 0;
}