// 10. Write a program to implement Binary Search.

#include<stdio.h>
void Search(int *arr,int n,int x){
    int start = 0,end = n - 1;
    while(start <= end){
        int mid = (start + end)/ 2; //2. start + (end-start)/2.
        if(arr[mid] == x){
            printf("Element %d found at index [%d]",x,mid);
            return;
        }else if(arr[mid]<x){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }printf("Element not found!");
}
int main(){

    int array[] = {2,3,4,6,7,9,10,45,67,100};
    int x,n = sizeof(array)/sizeof(array[0]);

    printf("Experiment No. 10\n");

    printf("Enter the element search: ");
    scanf("%d",&x);

    Search(array,n,x);

    return 0;
}