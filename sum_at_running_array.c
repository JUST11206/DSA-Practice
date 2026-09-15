#include <stdio.h>

int main(){
    int arr[100] = {1,2,3,4};
    int res=0;

    for(int i=0;i<4;i++)
    {
        arr[i] = arr[i] + res;
        res = arr[i];
        printf("%d ", res);
    }
    return 0;
}