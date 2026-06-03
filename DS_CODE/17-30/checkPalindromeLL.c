#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

// Reverse linked list
struct Node* reverse(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* curr = head;
    struct Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Check palindrome
bool isPalindrome(struct Node* head) {
    if (head == NULL || head->next == NULL)
        return true;

    struct Node *slow = head, *fast = head;

    // Find middle
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    struct Node* secondHalf = reverse(slow->next);

    struct Node* firstHalf = head;
    struct Node* temp = secondHalf;

    // Compare both halves
    while (temp != NULL) {
        if (firstHalf->data != temp->data)
            return false;
        firstHalf = firstHalf->next;
        temp = temp->next;
    }

    return true;
}

// Insert at beginning
struct Node* push(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

// Print list
void printList(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = push(head, 1);
    head = push(head, 2);
    head = push(head, 3);
    head = push(head, 2);
    head = push(head, 1);

    printList(head);

    if (isPalindrome(head))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}