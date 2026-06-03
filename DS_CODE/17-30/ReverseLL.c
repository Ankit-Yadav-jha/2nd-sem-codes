#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL,*m1,*m2;
struct node *newhead;

void creat();
void insert();
void delete();
void show();

// Function to reverse the linked list
struct node* reverseList(struct node* head) {
    struct node* prev = NULL;
    struct node* current = head;
    struct node* next = NULL;

    while (current != NULL) {
        next = current->next;   // store next node
        current->next = prev;   // reverse link
        prev = current;         // move prev forward
        current = next;         // move current forward
    }

    return prev; // new head
}

int main(){

    int operation;

    do
    {
        printf("\n-----Reverse Link List-----\n");
        printf("1. Creat\n2. Insert\n3. Delete\n4. Show\n5. Exit\n6. Rever.\n");
        printf("Enter the operation: ");
        scanf("%d",&operation);

        switch (operation)
        {
            case 1: creat(); break;

            case 2: insert(); break;

            case 3: delete(); break;

            case 4: show(); break;

            case 5: printf("\nExiting program..."); break;

            case 6: 
                
                newhead = reverseList(head);
                m1 = newhead;
                printf("Printing the reverser List:\n");
                while(m1 != NULL){
                    printf("%d -> ",m1->data);
                    m1 = m1->next;
                }printf("NULL.");
            
            break;
            default: printf("Unknown operation!\n"); break;
        }
    } while (operation != 5);
    


    return 0;

}

void creat(){
    int key,n;
    struct node *newnode;

    printf("\nEnter how many nodes have to creat: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        newnode = malloc(sizeof(struct node));
        
        printf("Enter the key for %d: ",i);
        scanf("%d",&key);
        newnode ->data = key;
        newnode ->next = NULL;
        
        if(head == NULL){
            head = tail = newnode;
        }else{
            tail ->next = newnode;
            tail = newnode;
        }
    }
    printf("List created successufuly..\n");
}
void insert(){
    if(head == NULL){
        printf("List not created!");
        return;
    }
    struct node *temp;
    int opt,key,pos,i=1;
    printf("\nWhere to insert a new node?\n");
    printf("1. Insert at beggining\n2. Insert at middle\n3. Insert at end\n");
    printf("Give your option: ");
    scanf("%d",&opt);

    switch (opt)
    {
        case 1: 
            temp = malloc(sizeof(struct node));
            printf("\nEnter the key to add: ");
            scanf("%d",&key);

            temp ->data = key;
            temp ->next = head;
            head = temp;
            printf("Added successfuly!\n");

        break;

        case 2: 
            temp = malloc(sizeof(struct node));
            printf("Now give the position where to insert: ");
            scanf("%d",&pos);
            printf("Enter the key to insert: ");
            scanf("%d",&key);
            m1 = head;
            while(i < pos){
                m2 = m1;
                m1 = m1 ->next;
                i++;
            }
            temp ->data = key;
            temp ->next = m1;
            m2 ->next = temp;
            printf("Added successfuly!\n");
        break;

        case 3: 
            temp = malloc(sizeof(struct node));
            printf("\nEnter the key to add: ");
            scanf("%d",&key);

            temp ->data = key;
            temp ->next = NULL;
            tail ->next = temp;
            tail = temp;
            printf("Added successfuly!\n");

        break;

        default: printf("\nUnknown Command!");
    }
}
void delete(){
    if(head == NULL){
        printf("List not created!");
        return;
    }
    struct node *temp;
    int opt,pos,i=1;
    printf("\nWhich node to be delete?\n");
    printf("1. Delete at beggining\n2. Delete at middle\n3. Delete at end\n");
    printf("Give your option: ");
    scanf("%d",&opt);

    switch (opt)
    {
        case 1: 
            m1 = head;
            head = head->next;
            free(m1);
            printf("Deleted successfuly!\n");
        break;

        case 2: 
        
            m1 = head;
            m2 = head;
            temp = head;
            printf("Enter the position of node to delete:");
            scanf("%d",&pos);
            while(i < pos-1){//3
                m2 = m2->next;
                temp = m2->next;
                m1 = temp->next;
                i++;
            }
            m2->next = m1;
            free(temp);
            printf("Deleted successfuly!\n");
        break;

        case 3: 
            m1 = tail;
            m2 = head;
            while(m2->next != tail){
                m2 -> next;
            }
            tail = m2;
            tail->next = NULL;
            free(m1);
            printf("Deleted successfuly!\n");
        break;

        default: printf("\nUnknown Command!");
    }
}
void show(){
    if(head == NULL){
        printf("List not created!");
        return;
    }
    struct node *ptr;
    printf("\nPrinting the list..\n");
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr ->next;
    }
    printf("Null.\n");
    
}
