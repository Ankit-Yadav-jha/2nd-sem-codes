#include <stdio.h>
#include <stdlib.h>

// Define structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to find height
int height(struct Node* root) {
    if (root == NULL)
        return -1;  // If counting edges (use 0 if counting nodes)

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    // Return max of left & right + 1
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// Main function
int main() {
    struct Node* root = NULL;
    printf("Question: 34\n");
    // Creating tree manually
    root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->right = createNode(30);

    printf("Height of Binary Tree = %d\n", height(root));

    return 0;
}