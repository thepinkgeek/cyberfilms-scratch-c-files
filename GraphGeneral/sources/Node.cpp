#include "Node.h"

Node::Node(int number, int distance, int parentIndex) {
    this->number = number;
    this->distance = distance;
    this->parentIndex = parentIndex;
}

bool Node::operator<(const Node& other) const {
    if (other.number != number) {
       return other.number < number; 
    }

    if (distance == other.distance) {
        return other.number < number;
    }

    return other.distance < distance;
}