// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
//can be work both sorted and unsorted
int linearSearch(int arr[],int size,int target){
    
    int i = 0;
    
    while(i<size){
        if(arr[i]==target){
           return i; //index of target;         
        }
        i++;
    }

return -1;
}

//needd to be sorted array
int binarySearch(int arr[],int size,int target){
    int low = 0;
    int high = size-1;
    int mid;

    while(low<=high){
        mid = low + (high-low)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid] > target){
            high = mid-1;
        }
        else {
            low = mid+1;
        }
        
    }
return -1;
}

int main() {
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
    
    int size = 5;
    int T;
    printf("\nEnter elements to search :");
    scanf("%d",&T);

    printf("Using Linear Searching...");
    int ans = linearSearch(arr,size,T);
     printf("\nElement index is :");
    printf("%d",ans);
    printf("\nUsing Binary Searching...");
    int bans = binarySearch(arr,size,T);
    printf("\nElement index is :");
    printf("%d",bans);
        
    return 0;
}