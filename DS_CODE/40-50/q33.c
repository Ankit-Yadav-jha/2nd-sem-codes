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

// Count leaf nodes
int countLeaves(struct Node* root) {
    if (root == NULL)
        return 0;

    // If node has no children, it's a leaf
    if (root->left == NULL && root->right == NULL)
        return 1;

    // Count leaves in left and right subtree
    return countLeaves(root->left) + countLeaves(root->right);
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
    printf("Question: 33\n");
    // Manually creating tree
    root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(20);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->right = createNode(30);

    printf("Inorder Traversal: ");
    inorder(root);

    int leafCount = countLeaves(root);
    printf("\nNumber of leaf nodes = %d\n", leafCount);

    return 0;
}