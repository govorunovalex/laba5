#pragma once
#include "Shape.h"
#include "Point.h"

template<typename DataType, typename DimType>
class Circle : public Shape {
    Point<DataType, DimType> a, b;
public:
    Circle(Point<DataType, DimType> a, Point<DataType, DimType> b);
    void show() override;
};
