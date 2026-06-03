//4. Design a Code to check if an array is sorted in ascending order.
#include<stdio.h>
#define max 8
void SortA(int *arr);
int main(){

    int arr[max] = {2,4,6,8,10,12,14,16};

    printf("Experiment No. 4\n");

    SortA(arr);

    return 0;
}

void SortA(int *arr){
    for(int i = 0; i < max - 1; i++){
        if(arr[i] > arr[i+1]){
            printf("The array is not shorted or shorted in decending order!");
            return;
        }
    }
    printf("The array is shorted in accending order!");
}
    