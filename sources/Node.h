#ifndef NODE_H
#define NODE_H
class Node {
    public:
        Node(int number, int distance);
        ~Node() {};
        bool operator<(Node& right);
        inline int getDistance() { return distance; }
        inline int getNumber() { return number; }
    private:
        
        //member variables
        int number;
        int distance;
};
#endif // NODE_H
