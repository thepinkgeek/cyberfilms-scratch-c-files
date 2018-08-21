#include <vector>
#include "Node.h"

struct DjikstraAlgorithmContext {
    std::vector<long long>* distances;
    std::vector<int>* pathInformation;
    int sourceIndex;
};


void DjikstraOperation(void* context, Node* node);