#pragma once
#pragma once
#include "Container.h"

template<typename ShapesNumType>
Container<ShapesNumType>::Node::Node(Shape& shape) {
            this->shape = &shape;
            next = nullptr;
        }

template<typename ShapesNumType>
Container<ShapesNumType>::Container() {
        size = 0;
        head = nullptr;
    }
template<typename ShapesNumType>
    void Container<ShapesNumType>::add(Shape& s) {
        ++size;
        if (!head) {
            head = new Node(s);
        }
        else {
            Node* tmp = head;
            while (tmp->next != nullptr) {
                tmp = tmp->next;
            }
            tmp->next = new Node(s);
        }
    }
    template<typename ShapesNumType>
    void Container<ShapesNumType>::remove(ShapesNumType i) {
        if (!head || i + 1 > size) {
            return;
        }
        else {
            --size;
            Node* tmp = head;
            if (i == 0) {
                tmp = tmp->next;
                delete head;
                head = tmp;
                return;
            }
            Node* prev = tmp;
            while (i != 0) {
                prev = tmp;
                tmp = tmp->next;
                --i;
            }
            prev->next = tmp->next;
            delete tmp;
        }
    }
    template<typename ShapesNumType>
    void Container<ShapesNumType>::print() {
        std::cout << "Container contains:\n";
        Node* tmp = head;
        while (tmp != nullptr)
        {
            tmp->shape->show();
            tmp = tmp->next;
        }
    }
    template<typename ShapesNumType>
    void Container<ShapesNumType>::print(ShapesNumType i) {
        const ShapesNumType original_i = i;
        std::cout << "Container contains at " << i << " :\n";
        Node* tmp = head;
        while (i != 0 && tmp != nullptr)
        {
            tmp = tmp->next;
            --i;
        }
        if (tmp) {
            tmp->shape->show();
        }
        else {
            std::cout << original_i << "`th shape does not exist in container!\n";
        }
    }
    template<typename ShapesNumType>
    Container<ShapesNumType>::~Container() {
        Node* tmp = head;
        while (tmp != nullptr)
        {
            Node* next = tmp->next;
            delete tmp;
            tmp = next;
        }

    }
