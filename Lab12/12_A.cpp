// Program to perform the operations of Graph ADT - Adjacent Matrix Implementation
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

Node* createNode(int vertex) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}

class Graph {
private:
    int numVertices;
    Node* adjList[MAX];

public:
    Graph(int vertices) {
        numVertices = vertices;
        for (int i = 0; i < vertices; i++) {
            adjList[i] = NULL;
        }
    }

    void insertEdge(int src, int dest);
    void deleteEdge(int src, int dest);
    void searchEdge(int src, int dest);
    void displayGraph();

};

int main() {
    int choice, src, dest, vertices;

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &vertices);

    if (vertices <= 0 || vertices > MAX) {
        printf("Invalid number of vertices! Must be between 1 and %d.\n", MAX);
        return 1;
    }

    Graph g(vertices);  

    while (1) {
        printf("\nGraph ADT Menu\n1.Insert Edge\n2.Delete Edge\n3.Search Edge\n4.Display Graph\n5.Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter source and destination vertices: ");
                scanf("%d %d", &src, &dest);
                g.insertEdge(src, dest);  
                break;
            case 2:
                printf("Enter source and destination vertices: ");
                scanf("%d %d", &src, &dest);
                g.deleteEdge(src, dest);  
                break;
            case 3:
                printf("Enter source and destination vertices: ");
                scanf("%d %d", &src, &dest);
                g.searchEdge(src, dest);  
                break;
            case 4:
                g.displayGraph();  
                break;
            case 5:
                printf("Exiting program...\n");
                //g.freeGraph();  
                return 0;
            default:
                printf("Invalid choice! Please select between 1 to 5.\n");
        }
    } 

}

// Inserts an edge between two vertices in the Graph
void Graph::insertEdge(int src, int dest) {
    if (src < 0 || src >= numVertices || dest < 0 || dest >= numVertices) {
        printf("Invalid vertices!\n");
        return;
    }

    Node* newNode = createNode(dest);
    newNode->next = adjList[src];
    adjList[src] = newNode;

    newNode = createNode(src);
    newNode->next = adjList[dest];
    adjList[dest] = newNode;

    printf("Edge inserted between %d and %d.\n", src, dest);
}

// Deletes an edge between two vertices in the Graph
void Graph::deleteEdge(int src, int dest) {
    if (src < 0 || src >= numVertices || dest < 0 || dest >= numVertices) {
        printf("Invalid vertices!\n");
        return;
    }

    Node* temp = adjList[src];
    Node* prev = NULL;

    while (temp != NULL && temp->vertex != dest) {
        prev = temp;
        temp = temp->next;
    }
    if (temp != NULL) {
        if (prev != NULL)
            prev->next = temp->next;
        else
            adjList[src] = temp->next;
        free(temp);
    }

    temp = adjList[dest];
    prev = NULL;
    while (temp != NULL && temp->vertex != src) {
        prev = temp;
        temp = temp->next;
    }
    if (temp != NULL) {
        if (prev != NULL)
            prev->next = temp->next;
        else
            adjList[dest] = temp->next;
        free(temp);
    }

    printf("Edge deleted between %d and %d.\n", src, dest);
}

// Searches for an edge in the Graph
void Graph::searchEdge(int src, int dest) {
    if (src < 0 || src >= numVertices || dest < 0 || dest >= numVertices) {
        printf("Invalid vertices!\n");
        return;
    }

    Node* temp = adjList[src];
    while (temp != NULL) {
        if (temp->vertex == dest) {
            printf("Edge exists between %d and %d.\n", src, dest);
            return;
        }
        temp = temp->next;
    }
    printf("No edge exists between %d and %d.\n", src, dest);
}

//Displays the graph as an Adjacent Matrix
void Graph::displayGraph() {
    printf("\nAdjacency List:\n");
    for (int v = 0; v < numVertices; v++) {
        Node* temp = adjList[v];
        printf("%d -> ", v);
        while (temp) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

