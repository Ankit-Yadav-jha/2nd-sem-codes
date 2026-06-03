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

// Function to convert to mirror
struct Node* mirror(struct Node* root) {
    if (root == NULL)
        return NULL;

    // Recursively mirror left and right subtrees
    struct Node* left = mirror(root->left);
    struct Node* right = mirror(root->right);

    // Swap left and right
    root->left = right;
    root->right = left;

    return root;
}

// Inorder traversal (for display)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Main function
int main() {
    struct Node* root = NULL;
    printf("Question: 36\n");

    // Creating tree manually
    root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->right = createNode(30);

    printf("Original Tree (Inorder): ");
    inorder(root);

    mirror(root);

    printf("\nMirror Tree (Inorder): ");
    inorder(root);

    return 0;
}