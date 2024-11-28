#include <stdio.h>
#include <stdbool.h>

#define MAX 100

void addEdge(int graph[][MAX], int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;
}

void removeEdge(int graph[][MAX], int u, int v) {
    graph[u][v] = 0;
    graph[v][u] = 0;
}

void vertexCover(int graph[][MAX], int V) {
    bool visited[MAX] = { false };
    int uEdges[MAX], vEdges[MAX]; // Arrays to hold the edge endpoints
    int edgeCount = 0;
int u,v,i;
    // Collect edges
    for ( u = 0; u < V; u++) {
        for ( v = u + 1; v < V; v++) {
            if (graph[u][v]) {
                uEdges[edgeCount] = u;
                vEdges[edgeCount] = v;
                edgeCount++;
            }
        }
    }

    // Determine vertex cover
    for ( i = 0; i < edgeCount; i++) {
        int u = uEdges[i];
        int v = vEdges[i];

        if (!visited[u] && !visited[v]) {
            visited[u] = true;
            visited[v] = true;
        }
    }

    // Print vertex cover
    printf("Vertex Cover: ");
    for ( i = 0; i < V; i++) {
        if (visited[i])
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int V = 7;
    int graph[MAX][MAX] = { 0 };

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 3, 4);
    addEdge(graph, 4, 5);
    addEdge(graph, 5, 6);

    vertexCover(graph, V);

    return 0;
}

