#include <stdio.h>

int main(){
    int transposeMatrix[100][100];
    int arr[10][10] = {{1,2},{3,4}};
    int res[10][10];
    //matrix
    printf("Original matrix: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j] = arr[i][j];
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    //transpose meaninig change row into column and column into row

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            transposeMatrix[j][i] = arr[i][j];
        }
    }
    printf("\nTransposed matrix: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",transposeMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}