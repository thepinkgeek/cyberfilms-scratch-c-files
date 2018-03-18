#include<queue>

#include "GraphOperations.h"
using namespace std;

void GraphOperations::addNeighbors(priority_queue<Node>& queue, int**& graph, int& numVertices, int& index, bool*& visitedList) {

    int* neighbors = graph[index];

    for(int i = 0; i < numVertices; i++) {
        int distance = neighbors[i];
        if ((i != index) && (distance > 0) && !visitedList[i]) {
            Node node = Node(i,distance);
            queue.push(node);
        }
    }
}

void GraphOperations::neighborTraversal(priority_queue<Node> queue,
        int** graph, 
        int numVertices, 
        bool* visitedList, 
        void (*operation)(context), 
        context theContext) {
    Node node = queue.top();
    if (operation) {
        (*operation) (theContext);
    }
    int index = node.getNumber();
    GraphOperations::addNeighbors(queue, graph, 
                                 numVertices, index, 
                                 visitedList);
    queue.pop();
}
