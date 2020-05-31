#pragma once
#include "Shape.h"
#include "Point.h"

template<typename DataType, typename DimType>
class Square : public Shape {
    Point<DataType, DimType> a, b;
public:
    Square(Point<DataType, DimType> a, Point<DataType, DimType> b);
    void show() override;
};
