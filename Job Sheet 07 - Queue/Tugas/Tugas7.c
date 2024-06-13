// NAMA : Rafli Arianto
// NIM  : 23343051

#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addEdge(Node *adjacencyList[], int src, int dest)
{
    Node *newNode = createNode(dest);
    newNode->next = adjacencyList[src];
    adjacencyList[src] = newNode;
}

void BFS(Node *adjacencyList[], int vertices, int source)
{
    int visited[MAX_VERTICES] = {0}; 
    int queue[MAX_VERTICES];         
    int front = 0, rear = 0;        

    visited[source] = 1;    
    queue[rear++] = source; 

    printf("Breadth First Traversal starting from vertex %d: ", source);

    while (front < rear)
    {
        int current = queue[front++]; 
        printf("%d ", current);

        for (Node *temp = adjacencyList[current]; temp != NULL; temp = temp->next)
        {
            int neighbor = temp->data;
            if (!visited[neighbor])
            {
                visited[neighbor] = 1;    
                queue[rear++] = neighbor; 
            }
        }
    }
}

int main()
{
    int vertices, edges, i, src, dest;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    Node *adjacencyList[MAX_VERTICES] = {NULL}; 

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter the edges (source destination): \n");
    for (i = 0; i < edges; ++i)
    {
        scanf("%d%d", &src, &dest);
        addEdge(adjacencyList, src, dest);
    }

    printf("Enter the source vertex for BFS: ");
    scanf("%d", &src);

    BFS(adjacencyList, vertices, src);

    return 0;
}
