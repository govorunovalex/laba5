#pragma once
#include "Cube.h"

template<typename DataType, typename DimType>
Cube<DataType, DimType>::Cube(Point<DataType, DimType> a, Point<DataType, DimType> b) :a(a), b(b) {}

template<typename DataType, typename DimType>
void Cube<DataType, DimType>::show()  {
    std::cout << "Cube from two points below:\n";
    a.show();
    b.show();
}