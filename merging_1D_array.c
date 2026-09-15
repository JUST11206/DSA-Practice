// C program to merge two arrays into a new array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mergeArr[100];
    int i, n1, n2;
    n1 = 5; // Size of first array
    n2 = 5; // Size of second array
    int arr1[50] = {1,2,3,4,5};
    int arr2[50] = {5,6,7,8,9,10};
    int res = 0;

    // Merging two arrays
    for(i=0;i<n1;i++){
        mergeArr[i] = arr1[i];

    }
    for(i=0;i<n2;i++){
        mergeArr[n1+i]=arr2[i];

    }

    printf("Merged array: \n");
    for(i=0;i<n1+n2;i++){
        printf("%d ",mergeArr[i]);
    }
    return 0;


}