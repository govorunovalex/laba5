#pragma once
#include "Square.h"

template<typename DataType, typename DimType>
Square<DataType, DimType>::Square(Point<DataType, DimType> a, Point<DataType, DimType> b) :a(a), b(b) {}

template<typename DataType, typename DimType>
void Square<DataType, DimType>::show() {
    std::cout << "Square from two points below:\n";
    a.show();
    b.show();
}
