//subtraction of two 2D matrices
#include <stdio.h>


int main(){
    int subtractMatrix[100][100];
    int arr1[10][10] = {{3,1},{1,3}};
    int arr2[10][10] = {{2,2},{2,2}};
    int res[10][10];
    int i, j;
    int rows = 2, cols = 2;
    
    //subtracting two matrices

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            subtractMatrix[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("Subtracted matrix: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",subtractMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}