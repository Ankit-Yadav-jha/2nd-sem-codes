#include <stdio.h>
#include <stdlib.h>

// Definition of linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to find middle element
struct Node* findMiddle(struct Node* head) {
    if (head == NULL)
        return NULL;

    struct Node* slow = head;
    struct Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // move 1 step
        fast = fast->next->next;    // move 2 steps
    }

    return slow;
}

// Helper function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Example usage
int main() {
    printf("Single LL\n");
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    // head->next->next->next = createNode(4);
    // head->next->next->next->next = createNode(5);

    struct Node* middle = findMiddle(head);

    if (middle != NULL)
        printf("Middle element: %d\n", middle->data);

    return 0;
}