#include<queue>
#include <iostream>

#include "GraphOperations.h"
using namespace std;

void GraphOperations::addNeighbors(priority_queue<Node, deque<Node> > &queue,
                                   const vector<vector<int>> &graph,
                                   int &numVertices, 
                                   int &index, 
                                   bool *&visitedList, 
                                   void (*operation)(context, Node*),
                                   context theContext)
{
    #if DEBUG_LEVEL
    cout << "visiting nodes of " << index << "\n";
    #endif

    visitedList[index] = true;

    vector<int> neighbors = graph[index];

    for(int i = 0; i < numVertices; i++) {
        int distance = neighbors[i];
        if ((i != index) && (distance > 0) && !visitedList[i]) {
            #if DEBUG_LEVEL
            cout << i << " is a neighbor of" << index << "\n";
            #endif
            Node node = Node(i,distance, index);
            if (operation)
            {
                (*operation)(theContext, &node);
            }
            queue.push(node);
        }
    }
    #if DEBUG_LEVEL
    cout << "done visiting nodes..." << "\n";
    #endif
}

void GraphOperations::neighborTraversal(priority_queue<Node, deque<Node> >& queue,
        const vector< vector<int> >& graph, 
        int numVertices, 
        bool* visitedList, 
        void (*operation)(context, Node*), 
        context theContext) {

    Node node = queue.top();
    queue.pop();
    
    int index = node.getNumber();
    GraphOperations::addNeighbors(queue, graph,
                                  numVertices, index,
                                  visitedList, operation, theContext);

    visitedList[index] = true;
}