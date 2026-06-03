#include <stdio.h>

#define MAX 10
#define INF 9999

int main() {
    int graph[MAX][MAX], visited[MAX];
    int vertices, i, j;
    int edges = 0;
    int minCost = 0;
    printf("Question: 43\n");

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter cost adjacency matrix:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);

            if (graph[i][j] == 0)
                graph[i][j] = INF;   // No edge
        }
    }

    for (i = 0; i < vertices; i++)
        visited[i] = 0;

    visited[0] = 1;   // Start from vertex 0

    printf("\nEdges in Minimum Spanning Tree:\n");

    while (edges < vertices - 1) {
        int min = INF;
        int a = -1, b = -1;

        for (i = 0; i < vertices; i++) {
            if (visited[i]) {
                for (j = 0; j < vertices; j++) {
                    if (!visited[j] && graph[i][j] < min) {
                        min = graph[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }

        if (a != -1 && b != -1) {
            printf("%d - %d : %d\n", a, b, min);
            minCost += min;
            visited[b] = 1;
            edges++;
        }
    }

    printf("\nMinimum Cost = %d\n", minCost);

    return 0;
}