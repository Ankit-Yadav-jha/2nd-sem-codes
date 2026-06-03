//6. Write a program creation and traversal of 2D Array in row major and column major order.
#include<stdio.h>
int main(){

    int arr[3][3];
    int n;

    printf("Experiment No. 6\n");

    printf("Enter the elements in array: \n");
    
    // Geting the elements from user.
    for(int i = 0; i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // Traversing in 2-D array.
    printf("Elements in row major order: \n");
    for(int i = 0; i<3;i++){
        for(int j=0;j<3;j++){
            printf("Index [%d %d]: %d\n",i,j,arr[i][j]);
        }
    }
    printf("Elements in column major order: \n");
    for(int j = 0; j<3;j++){
        for(int i=0;i<3;i++){
            printf("Index [%d %d]: %d\n",i,j,arr[i][j]);
        }
    }

    return 0;
}