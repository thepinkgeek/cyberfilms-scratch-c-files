#ifndef NODE_H
#define NODE_H
class Node {
    public:
        Node(int number, int distance, int parentIndex);
        ~Node() {};
        bool operator<(const Node& right) const;
        inline int getDistance() { return distance; }
        inline int getNumber() { return number; }
        inline int getParentIndex() { return parentIndex; }
    private:
        //member variables
        int number;
        int distance;
        int parentIndex;
};
#endif // NODE_H
