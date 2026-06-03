//3. Write a program to reverse the elements of an array.
#include<stdio.h>
void REVERSE(int *arr,int n);
void PRINT(int *arr,int n);
int main(){

    int array[] = {1,2,3,4,5,6};
    int n = sizeof(array)/sizeof(array[0]);

    printf("Experiment No. 3\n");

    printf("Printing the orignal array: ");
    PRINT(array,n);

    REVERSE(array,n);

    printf("Printing the reverse array: ");
    PRINT(array,n);
    
    return 0;
}

void REVERSE(int *arr,int n){
    int i=0,j=n-1;
    while(i<=j){
        arr[i] = (arr[i] + arr[j]) - (arr[j] = arr[i]);
        i++;
        j--;
    }

}

void PRINT(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}