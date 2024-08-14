#include <iostream>
using namespace td;


class Node {
public:
    int data;
    Node *next;
    Node(int data) {
    this->data = data;
    this->next = nullptr;
    }
};

void add