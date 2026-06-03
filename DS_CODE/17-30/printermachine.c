// 18. printer using queue 
#include<stdio.h>
#include<stdlib.h>
struct job{
    char name[10];
    int page;
    struct job *next;
};
struct job *front = NULL,*rear = NULL,*newjob,*temp;
int n = 0;
void add(){
    newjob = malloc(sizeof(struct job));
    printf("Enter the file name: ");
    scanf("%s",newjob->name);
    printf("Enter the no.of set: ");
    scanf("%d",&newjob->page);
    newjob->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newjob;
    }else{
        rear->next = newjob;
        rear = newjob;
    }
    n++;
    printf("Job %d [%s] added in queue.",n,newjob->name);
}
void display(){
    if(front == NULL){
        printf("Queue is empty..");
        return;
    }
    int i = 1;
    temp = front;
    printf("Current print Queue:\n");
    while(temp != NULL){
        printf("Job %d: %s [%d page]\n",i,temp->name,temp->page);
        i++;
        temp = temp->next;
    }
}
void printjob(){
    if(front == NULL){
        printf("Queue is empty..");
        return;
    }
    temp = front;
    front = front->next;
    if(front == NULL){
        rear = NULL;
    }
    printf("Printing Job: %s [%d page]",temp->name,temp->page);
    n--;
    free(temp);
}
int main(){
    int opt;
    do
    {
        printf("\n--- Printer Queue Menu ---\n");
        printf("1. Add Print Job\n");
        printf("2. Print Job\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &opt);
        switch (opt)
        {
            case 1: add(); break;
            case 2: printjob(); break;
            case 3: display(); break;
            case 4: printf("Exiting the program..."); break;
            
            default: printf("Unknown command.."); break;
        }
    } while (opt != 4);
    

    return 0;
}