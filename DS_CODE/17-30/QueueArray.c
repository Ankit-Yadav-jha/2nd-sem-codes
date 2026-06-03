// Implement Queue using array.

#include<stdio.h>
#define max 10
int front = -1,rear = -1,queue[max];
void CreatQue(){
    int n,val;
    if(rear == max-1){
        printf("\nQueue is overflow..");
        return;
    }
    printf("\nEnter the no.of elements to be insert: ");
    scanf("%d",&n);
    if(n > max){
        printf("**You are inserting data more then queue capacity**Max capacity[10]");
        return;
    }
    for(int i=1;i<=n;i++){
        printf("\nEnter the data here: ");
        scanf("%d",&val);
        if(rear == -1){
            rear = front = 0;
        }
        else{
            rear++;
        }
        queue[rear] = val;
    }
    printf("\nQueue created successfuly...");
}
void Delete(){
    int n;
    if(front == -1 || front > rear){
        printf("\nQueue is Empty..");
        return;
    }
    n = queue[front++];
    printf("%d is deleted..",n);
}
void Display(){
    if(front > rear){
        printf("\nQueue is Empty..");
        return;
    }
    printf("\nPrinting the elements: ");
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}
int main(){
    int opt;
    do
    {
        printf("\n1.Create\n2.Delete\n3.Display\n");
        scanf("%d",&opt);
        switch (opt)
        {
            case 1:
                CreatQue();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Display();
                break;
            case 4: printf("Exiting the program..."); break;
            default:
                printf("\nUnknown value..");
                break;
        }   
    } while (opt!=4);
    
    return 0;
}