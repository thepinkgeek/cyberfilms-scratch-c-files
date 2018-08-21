#include "GraphOperations.h"
#include "Node.h"

#include <queue>

using namespace std;

int GraphTraversalMain(vector< vector<int> > graph,
                       int numVertices, 
                       int startIndex,
                       void(*operation)(void*, Node*),
                       void* context) {

    Node node = Node(startIndex, 0, 0);
    priority_queue<Node, deque<Node>> queue;
    bool visited[numVertices] = {false};

    queue.push(node);

    while(!queue.empty()) {
        GraphOperations::neighborTraversal(queue, graph, numVertices,
                                           visited, operation, context);
    }
    return 0;
}

int GraphTraversalMain() {
    return 0;
}