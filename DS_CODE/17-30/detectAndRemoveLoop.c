#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Create node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to detect and remove loop
void detectAndRemoveLoop(struct Node* head) {
    if (head == NULL) return;

    struct Node *slow = head, *fast = head;

    // Step 1: Detect loop
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Loop detected

            // Step 2: Find start of loop
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }

            // Step 3: Find last node of loop
            struct Node* temp = slow;
            while (temp->next != slow) {
                temp = temp->next;
            }

            // Break the loop
            temp->next = NULL;

            return;
        }
    }
}

// Print list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Example usage
int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    

    // Creating loop: 4 -> 2
    head->next->next->next = head->next;

    detectAndRemoveLoop(head);

    printf("List after removing loop:\n");
    printList(head);

    return 0;
}