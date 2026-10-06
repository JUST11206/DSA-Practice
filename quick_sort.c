#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;

    while(i<=j){
        while(i<=high && arr[i] <= pivot){
            i++; //no change increment i
        }
        while(j>= low && arr[j] > pivot){
            j--; //no change j decrement 
        }

        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[low],&arr[j]);
    return j;
}

void quickSort(int arr[],int low, int high){

    if(low<high){
        int p_index = partition(arr,low,high);
        quickSort(arr,low,p_index-1);
        quickSort(arr,p_index+1,high);
    }
}



int main(){
    int a = 10 , b = 20;
    printf("Before swap :%d,%d",a,b);
    printf("\n");
    swap(&a,&b);
    printf("After swap :");
    printf("%d,%d",a,b);
    
printf("\n");
int arr[] = {5,2,1,8,6,3};
int low = 0;
int high = 5;
    printf("Before sorting array :");
    for(int i=low;i<high;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    quickSort(arr,low,high);
    printf("After quick sorting :");
    for(int i=low;i<high;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
    
              