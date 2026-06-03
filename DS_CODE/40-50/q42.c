#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int queue[MAX];
int front = -1, rear = -1;
int vertices;

// Queue functions
void enqueue(int value) {
    if (rear == MAX - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = value;
}

int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

// BFS function
void BFS(int start) {
    int i, node;

    for (i = 0; i < vertices; i++)
        visited[i] = 0;

    front = rear = -1;

    enqueue(start);
    visited[start] = 1;

    printf("BFS Traversal: ");

    while (front <= rear) {
        node = dequeue();
        printf("%d ", node);

        for (i = 0; i < vertices; i++) {
            if (graph[node][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

// DFS function
void DFS(int start) {
    int i;

    visited[start] = 1;
    printf("%d ", start);

    for (i = 0; i < vertices; i++) {
        if (graph[start][i] == 1 && visited[i] == 0)
            DFS(i);
    }
}

// Main function
int main() {
    int i, j, start;
    printf("Question: 42\n");

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    BFS(start);

    for (i = 0; i < vertices; i++)
        visited[i] = 0;

    printf("\nDFS Traversal: ");
    DFS(start);

    return 0;
}