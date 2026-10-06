#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a; //5
    *a = *b; //10
    *b = temp; //5
}


int partition(int arr[],int low,int high){

    int pivot = arr[low];
    int i = low+1;
    int j = high;

    while(i<j){
        while(i<j && arr[i] <= pivot){
            i++;
        }
        while(j>=low && arr[j] > pivot){
            j--;
        }
        if(i<j){
        swap(&arr[i],&arr[j]);
        }
        }
    swap(&arr[j],&arr[low]);
    return j;
}

void quickSort(int arr[],int low,int high){
    if(low<high){
        //func() call to partition 
        //store pivot index 
        int P_index = partition(arr,low,high);
        //After partition it divide into two parts 
        //Left part 
        quickSort(arr,low,P_index-1); //low to P_index-1 
        //right part
        quickSort(arr,P_index+1,high); // P_index+1 to high
        
    }
}

int main(){
    int a = 5,b = 10;
      swap(&a,&b);
    printf("%d,%d",a,b);
printf("\nswap is working !\n");

    int n,value,arr[100];
    printf("Enter number for elements :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter value %d :",i+1);
        scanf("%d",&value);
        arr[i] = value;
    }
    
    printf("\nArray :");
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    int low = 0;
    int high = n-1;

    
    quickSort(arr,low,high);

    printf("\nSorted array\n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    
    
    
    return 0;
}