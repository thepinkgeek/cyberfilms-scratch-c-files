#ifndef GRAPH_OPERATIONS_H
#define GRAPH_OPERATIONS_H

#include "Node.h"
#include <queue>
#include <vector>
typedef void* context;

class GraphOperations {
    private:
        GraphOperations() {}
        ~GraphOperations() {}
    public:
        static void addNeighbors(std::priority_queue<Node, std::deque<Node> >& queue,
                                 const std::vector< std::vector<int> >& graph, 
                                 int& numVertices, 
                                 int& index,
                                 bool*& visitedList,
                                 void (*function_pointer)(context, Node*),
                                 void* context);
        static void neighborTraversal(std::priority_queue<Node, std::deque<Node> >& queue, 
                                      const std::vector < std::vector<int> >& graph, 
                                      int numVertices,
                                      bool* visitedList,
                                      void (*function_pointer)(context, Node*),
                                      void* context);
};

#endif // GRAPH_OPERATIONS_H
