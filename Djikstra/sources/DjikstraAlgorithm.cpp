#include <iostream>
#include "DjikstraAlgorithm.h"

using namespace std;

void DjikstraOperation(void* context, Node* node) {
    #if DEBUG_LEVEL
    cout << "inspecting node "
         << node->getNumber() 
         << " whose parent is "
         << node->getParentIndex() 
         << endl;
    #endif

    DjikstraAlgorithmContext djikstraContext = *(DjikstraAlgorithmContext *) context;
    long candidate = (*(djikstraContext.distances))[node->getParentIndex()] + (long) node->getDistance();
    long current = (*(djikstraContext.distances))[node->getNumber()];

    #if DEBUG_LEVEL
    cout << "candidate : " << candidate << endl;
    cout << "current : " << current << endl;
    #endif

    if ( candidate < current ) {
        #if DEBUG_LEVEL
        cout << "setting distance of " << node->getParentIndex() << endl;
        #endif

        (*(djikstraContext.distances))[node->getNumber()] = candidate;
        (*(djikstraContext.pathInformation))[node->getNumber()] = node->getParentIndex();

        #if DEBUG_LEVEL
        for (int i = 0; i < (*(djikstraContext.distances)).size(); i++)
        {
            cout << (*(djikstraContext.distances))[i] << endl;
        }
        #endif
    }
}