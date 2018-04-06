#include <iostream>
#include <vector>
#include <math.h>

#include "GraphTraversalMain.h"
#include "DjikstraAlgorithm.h"

#define DEBUG_LEVEL 0
using namespace std;

int main() {
    vector< vector<int> > graph = {
        {0, 1, 3, 0, 11},
        {0, 0, 1, 1, 9},
        {0, 1, 0, 2, 1},
        {0, 1, 1, 1, 4},
        {0, 1, 1, 5, 0},
    };
    int numVertices = 5;

    vector<long long> distances(numVertices, INFINITY);
    vector<int> pathInformation(numVertices, 0);
    distances[0] = 0;
    DjikstraAlgorithmContext context;
    context.distances = &distances;
    context.sourceIndex = 0;
    context.pathInformation = &pathInformation;

    GraphTraversalMain(graph, 5, 0, DjikstraOperation, &context);

    for (int i = 0; i < (*(context.distances)).size(); i++) {
        cout << (*(context.distances))[i] << endl;
    }
    cout << "******************" << endl;
    for (int i = 0; i < (*(context.pathInformation)).size(); i++) {
        cout << (*(context.pathInformation))[i] << endl;
    }
    return 0;
}