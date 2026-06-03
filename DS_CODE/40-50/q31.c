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

// Insert node
struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Search node
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

// Find minimum value node
struct Node* findMin(struct Node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}

// Delete node
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node with one or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Update node (delete + insert)
struct Node* update(struct Node* root, int oldValue, int newValue) {
    root = deleteNode(root, oldValue);
    root = insert(root, newValue);
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
    int choice, value, oldValue, newValue;

    printf("Question: 31");

    while (1) {
        printf("\n--- BST Operations ---\n");
        printf("1. Insert\n2. Delete\n3. Search\n4. Update\n5. Display\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;

            case 3:
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (search(root, value))
                    printf("Value found!\n");
                else
                    printf("Value not found!\n");
                break;

            case 4:
                printf("Enter old value: ");
                scanf("%d", &oldValue);
                printf("Enter new value: ");
                scanf("%d", &newValue);
                root = update(root, oldValue, newValue);
                break;

            case 5:
                printf("BST (Inorder): ");
                inorder(root);
                printf("\n");
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
}