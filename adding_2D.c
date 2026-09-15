#include<stdio.h>
int main(){
    int arr1[10][10],arr2[10][10],i,j,temp;
    printf("ENter arr 1  elements: \n");
    for(i =0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter the element arr1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("ENter arr 2 elements: \n");
    for(i =0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter the element arr2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    int res[10][10];
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

return 0;
}