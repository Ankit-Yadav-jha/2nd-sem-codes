#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Insert at beginning
struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    return newNode;
}

// Reverse doubly linked list
struct Node* reverse(struct Node* head) {
    struct Node* temp = NULL;
    struct Node* current = head;

    while (current != NULL) {
        // Swap prev and next
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to next node (which is prev now)
        current = current->prev;
    }

    // Update head
    if (temp != NULL)
        head = temp->prev;

    return head;
}

// Display list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main
int main() {

    printf("Doubly Reverse LL!\n");
    struct Node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);

    printf("Original List:\n");
    display(head);

    head = reverse(head);

    printf("Reversed List:\n");
    display(head);

    return 0;
}