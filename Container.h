#pragma once
#include <iostream>
#include "Shape.h"

template<typename ShapesNumType>
class Container {

    struct Node {
        Shape* shape;
        Node* next;
        Node(Shape& shape);
    };

    Node* head;
    ShapesNumType size;
public:
    Container();
    void add(Shape& s);
    void remove(ShapesNumType i);
    void print();
    void print(ShapesNumType i);
    ~Container();
};