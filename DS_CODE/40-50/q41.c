#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// -------- Adjacency List Node --------
struct Node {
    int vertex;
    struct Node* next;
};

// Create new list node
struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Add edge to adjacency list
void addEdgeList(struct Node* adj[], int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = adj[src];
    adj[src] = newNode;

    // For undirected graph
    newNode = createNode(src);
    newNode->next = adj[dest];
    adj[dest] = newNode;
}

// Display adjacency list
void displayList(struct Node* adj[], int vertices) {
    int i;
    struct Node* temp;

    printf("\nAdjacency List:\n");
    for (i = 0; i < vertices; i++) {
        printf("%d -> ", i);
        temp = adj[i];
        while (temp != NULL) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

// Display adjacency matrix
void displayMatrix(int graph[MAX][MAX], int vertices) {
    int i, j;

    printf("\nAdjacency Matrix:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    int vertices = 5;
    int i;
    printf("Question: 41");

    // Initialize adjacency matrix
    int graph[MAX][MAX] = {0};

    // Initialize adjacency list
    struct Node* adj[MAX];
    for (i = 0; i < MAX; i++)
        adj[i] = NULL;

    // Add edges: 0-1, 0-4, 1-2, 1-3, 1-4, 2-3, 3-4
    int edges[][2] = {{0,1},{0,4},{1,2},{1,3},{1,4},{2,3},{3,4}};
    int totalEdges = 7;

    for (i = 0; i < totalEdges; i++) {
        int src = edges[i][0];
        int dest = edges[i][1];

        // Matrix
        graph[src][dest] = 1;
        graph[dest][src] = 1;

        // List
        addEdgeList(adj, src, dest);
    }

    displayMatrix(graph, vertices);
    displayList(adj, vertices);

    return 0;
}