#include "Node.h"

Node::Node(int number, int distance) {
    this->number = number;
    this->distance = distance;
}

bool Node::operator<(Node& other) {
    return this->getDistance() < other.getDistance();
}
