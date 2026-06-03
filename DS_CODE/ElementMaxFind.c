//1.Create a program to find the maximum element in an array
#include<stdio.h>
int FindMax(int *array,int n);
int main(){

    int arr[] = {23,34,23,12,56,6,67,23};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Experiment No. 1\n");
    

    printf("The maximum element in an array: ");
    FindMax(arr,n);

    return 0;
}

int FindMax(int *array,int n){
    int max = array[0];

    for(int i=0;i<n;i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    printf("%d",max);
    return 1;
}