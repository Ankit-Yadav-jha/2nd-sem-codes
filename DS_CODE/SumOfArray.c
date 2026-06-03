// 2.Design a Code to calculate the sum of all elements in an array.
#include<stdio.h>
void SUM(int *array,int n);
int main(){
    int n = 10;
    int arr[n];

    printf("Experiment No. 2\n");
    
    for(int i=0;i<n;i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Elements saved successfuly in array!\n");
    SUM(arr,n);
    return 0;
}

void SUM(int *array,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + array[i];
    }
    printf("Sum of all elements are %d",sum);
}