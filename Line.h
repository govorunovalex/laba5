#pragma once
#include "Shape.h"
#include "Point.h"

template<typename DataType, typename DimType>
class Line : public Shape {
    Point<DataType, DimType> a, b;
public:
    Line(Point<DataType, DimType> a, Point<DataType, DimType> b);
    void show() override;
}; 
