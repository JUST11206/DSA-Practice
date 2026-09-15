#include <stdio.h>

int main(){
    int multiMatrix[100][100];
    int arr1[10][10] = {{1,2},{3,4}};
    int arr2[10][10] = {{5,6},{7,8}};
    int res[10][10];

    // Multiplying two matrices
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j] = arr1[i][j] * arr2[i][j];

        }

    }
    printf("Multiplied matrix: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}