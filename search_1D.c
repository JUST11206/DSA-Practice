#include <stdio.h>


int main()
{

    int arr[100] = { 10,20,30,40,50,60,70,80,90,100};
    int target;
    int n = 10;
    printf("Enter Element :");
    scanf("%d",target);

    for(int i=0;i<n;i++){
        if(arr[i]==target)
        {
            printf("Element found %d",i);
            break;
        }
        else{
            printf("Element not found!");
        }
    }
return 0;
}