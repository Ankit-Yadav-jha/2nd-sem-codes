// 9. Create a code to Implement Linear Search.
#include<stdio.h>
void Search(int *arr,int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            printf("Element %d found at index:[%d]",x,i);
            return;
        }
    }
    printf("Element not found!");
}
int main(){

    int array[] = {2,4,6,2,5,7,2,6,8,2};
    int n = sizeof(array)/sizeof(array[0]);
    int x;

    printf("Experiment No. 9\n");

    printf("Enter the number to find: ");
    scanf("%d",&x);

    Search(array,n,x);


    return 0;
}