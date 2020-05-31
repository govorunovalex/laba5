#pragma once
#include "Shape.h"


template<typename DataType, typename DimType>
class Point : public Shape {
    DimType dim;
    DataType* components;
public:
    Point();
    Point(DimType dim, DataType new_comp[]);
    Point(const Point& other);
    Point& operator=(const Point& p);
    void show() override;
    DimType getDim();
    ~Point();
};
