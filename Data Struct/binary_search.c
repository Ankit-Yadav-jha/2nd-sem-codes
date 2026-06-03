#include<stdio.h>
#define max 10
int main()
{
    int arr[max] = {1,2,3,4,5,6,7,8,9,10};
    int target=0,start=0,end= max-1;
    
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == target){
            printf("Target found![%d]",mid);
            break;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
    }
    printf("Target not found!");

    return 0;
}