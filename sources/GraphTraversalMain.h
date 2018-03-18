#ifndef GRAPH_TRAVERSAL_MAIN_H
#define GRAPH_TRAVERSAL_MAIN_H

int GraphTraversalMain(int** graph, int numVertices, 
                       int startIndex,
                       void(*operation)(void*),
                       void* context);
#endif //GRAPH_TRAVERSAL_MAIN_H
