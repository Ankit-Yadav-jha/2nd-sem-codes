#include<stdio.h>
int main(){

    int arr[] = {2,4,8,3,1};
    int target = 9;

    for(int i = 0; i< 5; i++){
        for(int j=0; j<5; j++){
            if(arr[i] + arr[j] == target){
                printf("[%d] and [%d]",i,j);
                return 0;
            }
        }

    }


    return 0;

}