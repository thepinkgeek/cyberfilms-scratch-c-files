#include "GraphOperations.h"
#include "Node.h"
#include <queue>

using namespace std;

int GraphTraversalMain(int** graph,
                       int numVertices, 
                       int startIndex,
                       void(*operation)(void*),
                       void* context) {
    Node node = Node(startIndex, 0);
    priority_queue<Node> queue;
    queue.push(node);
    bool visited[numVertices] = {false};

    while(!queue.empty()) {
        GraphOperations::neighborTraversal(queue, graph, numVertices, visited,0, 0);
    }
}

