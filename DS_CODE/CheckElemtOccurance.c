//5. Design a Code to count the occurrence of a specific element in an array.

#include<stdio.h>
#define max 20
void check(int *arr,int element);
int main(){

    int arr[max] = {2,3,5,2,4,6,2,2,5,7,4,7,8,5,7,9,3,6};
    int elemt;

    printf("Experiment No. 5\n");

    printf("Enter the element to check occurance: ");
    scanf("%d",&elemt);

    check(arr,elemt);

    return 0;
}

void check(int *arr,int element){
    int count = 0;

    for(int i = 0;i<max;i++){
        if(arr[i] == element)
            count++;
    }
    printf("The occurance of %d in array is: %d",element,count);
}