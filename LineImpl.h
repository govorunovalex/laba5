#pragma once
#include "Line.h"

template<typename DataType, typename DimType>
Line<DataType, DimType>::Line(Point<DataType, DimType> a, Point<DataType, DimType> b) :a(a), b(b) {}

template<typename DataType, typename DimType>
void Line<DataType, DimType>::show() {
    std::cout << "Line from two points below:\n";
    a.show();
    b.show();
}