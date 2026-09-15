//leetcode problem 238
//product of 1D array except the current index
#include <stdio.h>

int main(){
    int arr[100] = {1,2,3,4};
    int res[100];
    
    for(int i=0;i<4;i++){
        res[i] = 1;
        for(int j=0;j<4;j++){
            if(i!=j){ //if i is not equal to j then multiply the current index with the other indexes
                res[i] *= arr[j]; //multiplying all the elements except the current index
            }
        }
        printf("%d ", res[i]);
    }
    return 0;
}