#ifndef GRAPH_TRAVERSAL_MAIN_H
#define GRAPH_TRAVERSAL_MAIN_H

#include "Node.h"
#include <vector>

int GraphTraversalMain(std::vector< std::vector<int> >graph, int numVertices, 
                       int startIndex,
                       void(*operation)(void*, Node*),
                       void* context);
int GraphTraversalMain();
#endif //GRAPH_TRAVERSAL_MAIN_H
