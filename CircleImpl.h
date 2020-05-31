#pragma once
#include "Circle.h"

template<typename DataType, typename DimType>
Circle<DataType, DimType>::Circle(Point<DataType, DimType> a, Point<DataType, DimType> b) :a(a), b(b) {}

template<typename DataType, typename DimType>
void Circle<DataType, DimType>::show() {
    std::cout << "Circle from two points below:\n";
    a.show();
    b.show();
}
