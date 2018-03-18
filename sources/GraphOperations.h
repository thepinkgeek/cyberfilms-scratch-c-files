#ifndef GRAPH_OPERATIONS_H
#define GRAPH_OPERATIONS_H

#include "Node.h"
#include <queue>
typedef void* context;

class GraphOperations {
    private:
        GraphOperations() {}
        ~GraphOperations() {}
    public:
        static void addNeighbors(std::priority_queue<Node>& queue,
                                 int**& graph, 
                                 int& numVertices, 
                                 int& index,
                                 bool*& visitedList);
        static void neighborTraversal(std::priority_queue<Node> queue, 
                                      int** graph, 
                                      int numVertices,
                                      bool* visitedList,
                                      void (*function_pointer)(context),
                                      void* context);
};

#endif // GRAPH_OPERATIONS_H
