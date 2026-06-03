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

// Function to print paths
void printPaths(struct Node* root, int path[], int pathLen) {
    if (root == NULL)
        return;

    // Add current node to path
    path[pathLen] = root->data;
    pathLen++;

    // If it's a leaf node, print the path
    if (root->left == NULL && root->right == NULL) {
        for (int i = 0; i < pathLen; i++) {
            printf("%d ", path[i]);
        }
        printf("\n");
    } else {
        // Otherwise, go left and right
        printPaths(root->left, path, pathLen);
        printPaths(root->right, path, pathLen);
    }
}

// Main function
int main() {
    struct Node* root = NULL;
    int path[100];  // Array to store paths
    printf("Question: 35\n");

    // Creating tree manually
    root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->right = createNode(30);

    printf("Root to Leaf Paths:\n");
    printPaths(root, path, 0);

    return 0;
}