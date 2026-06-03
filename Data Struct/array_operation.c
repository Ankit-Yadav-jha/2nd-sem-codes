// traversal, insertion, deletion, updation, searching, shorting and {merging}.

#include <stdio.h>
int n;
void traversal(int *ptr);
void insertion(int *ptr);
void updation(int *ptr);
void deletion(int *ptr);
int searching(int *ptr);
void shorting(int *ptr);
int main(){

    int *add;
    printf("Enter the number of elements to insert in the array: ");
    scanf("%d",&n);

    int arr[n],opti;
    printf("Enter the elements: ");
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    add = &arr[0];

    do{

        printf("\n---------------------");
        printf("\n1. traversal\n2. insertion\n3. updation\n4. deletion\n5. searching\n6. shorting\n7. Exit\n");
        printf("Enter the operation: ");
        scanf("%d",&opti);

        switch (opti)
        {
            case 1: traversal(add); break;
            case 2: insertion(add); break;
            case 3: updation(add); break;
            case 4: deletion(add); break;
            case 5: searching(add); break;
            case 6: shorting(add); break;
            case 7: printf("Exiting the program.."); break;
        }
    }while(opti != 7);

    return 0;
}

void traversal(int *ptr){
    printf("\nprinting the elements: ");
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    //printf("\nprinting completed! ");
}
void insertion(int *ptr){
    int key,index;
    printf("Enter the key: ");
    scanf("%d",&key);
    printf("Enter the index: ");
    scanf("%d",&index);
    for(int i = n-1; i >= index; i--)
    {
        ptr[i] = ptr[i-1];
    }
    ptr[index] = key;
    printf("Inserted successfuly!");
    traversal(ptr);
    
}
void updation(int *ptr){
    int key,index;
    printf("Enter the key: ");
    scanf("%d",&key);
    printf("Enter the index of element: ");
    scanf("%d",&index);
    ptr[index] = key;
    printf("Updated successfuly!");
    traversal(ptr);

}
void deletion(int *ptr){
    int index,i;
    printf("Enter the index of element: ");
    scanf("%d",&index);
    for(i = index; i<n; i++){
        ptr[i] = ptr[i+1];
    }
    ptr[i-1] = 0;
    printf("Element deleted successfuly!");
    traversal(ptr);

}
int searching(int *ptr){       // Linear search
    int target,j=0;
    printf("Enter the target: ");
    scanf("%d",&target);
    for(int i = 0; i<n;i++){
        if(ptr[i] == target){
            printf("Target found [%d]",i);
            j++;
            break;
        }
        // else{
        //     printf("Target not found!");
        //     return 1;
        // }
    }
    if(j == 0)
        printf("Target not found!");
    
}
void shorting(int *ptr){        // Bubble short
    for(int i = 0; i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ptr[i]>ptr[j]){
                ptr[i] = ptr[i] + ptr[j];
                ptr[j] = ptr[i] - ptr[j];
                ptr[i] = ptr[i] - ptr[j];
            }
        }
    }
    printf("Shorting successful!");
    traversal(ptr);

}
