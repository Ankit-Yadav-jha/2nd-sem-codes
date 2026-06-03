#include <stdio.h>
#include <stdlib.h>

// Structure of node
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

// Function to find maximum
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to calculate height
int height(struct Node* root) {
    if (root == NULL)
        return 0;

    return max(height(root->left), height(root->right)) + 1;
}

// Function to check balance
int isBalanced(struct Node* root) {
    if (root == NULL)
        return 1;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int diff = leftHeight - rightHeight;
    if (diff < 0)
        diff = -diff;

    if (diff <= 1 &&
        isBalanced(root->left) &&
        isBalanced(root->right))
        return 1;

    return 0;
}

// Main function
int main() {
    struct Node* root = NULL;
    printf("Question: 40\n");

    // Creating tree
    root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(7);

    if (isBalanced(root))
        printf("The tree is Balanced.\n");
    else
        printf("The tree is NOT Balanced.\n");

    return 0;
}