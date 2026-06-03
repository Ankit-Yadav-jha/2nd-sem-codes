#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

// Function to check BST using range
int isBST(struct Node* root, int min, int max) {
    if (root == NULL)
        return 1;

    if (root->data <= min || root->data >= max)
        return 0;

    return isBST(root->left, min, root->data) &&
           isBST(root->right, root->data, max);
}

// Main function
int main() {
    struct Node* root = NULL;
    printf("Question: 39\n");

    // Creating tree
    root = createNode(50);
    root->left = createNode(30);
    root->right = createNode(70);
    root->left->left = createNode(20);
    root->left->right = createNode(40);
    root->right->left = createNode(60);
    root->right->right = createNode(80);

    if (isBST(root, INT_MIN, INT_MAX))
        printf("The tree is a Binary Search Tree.\n");
    else
        printf("The tree is NOT a Binary Search Tree.\n");

    return 0;
}