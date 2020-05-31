#pragma once
#include "Shape.h"
#include "Point.h"

template<typename DataType, typename DimType>
class Cube : public Shape {
    Point<DataType, DimType> a, b;
public:
    Cube(Point<DataType, DimType> a, Point<DataType, DimType> b);
    void show() override;
};