#include <stdio.h>
#include <stdlib.h>

// Definition of doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to find middle node
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

// Helper function to create node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Example usage
int main() {
    printf("Question no. 28\n");
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(3);
    struct Node* fourth = createNode(4);
    // struct Node* fifth = createNode(5);

    // Linking nodes
    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = NULL;
    // fifth->prev = fourth;

    struct Node* mid = findMiddle(head);

    if (mid != NULL)
        printf("Middle element: %d\n", mid->data);

    return 0;
}