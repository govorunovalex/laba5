#pragma once
#include "Point.h"

template<typename DataType, typename DimType>
Point<DataType, DimType>::Point():dim(0), components(nullptr) {}

template<typename DataType, typename DimType>
Point<DataType, DimType>::Point(DimType dim, DataType new_comp[]) :dim(dim) {
    components = new DataType[dim];
    for (DimType i = 0; i < dim; ++i) {
        components[i] = new_comp[i];
    }
}

template<typename DataType, typename DimType>
Point<DataType, DimType>::Point(const Point& other) :dim(other.dim) {
    components = new DataType[dim];
    for (DimType i = 0; i < dim; ++i) {
        components[i] = other.components[i];
    }
}

template<typename DataType, typename DimType>
Point<DataType, DimType>& Point<DataType, DimType>::operator=(const Point& p) {
    delete[] components;
    dim = p.dim;
    components = new DataType[dim];
    for (DimType i = 0; i < dim; ++i) {
        components[i] = p.components[i];
    }
    return *this;
}

template<typename DataType, typename DimType>
void Point<DataType, DimType>::show() {
    std::cout << "Point: ";
    for (DimType i = 0; i < dim; ++i) {
        std::cout << " " << components[i];
    }
    std::cout << std::endl;
}

template<typename DataType, typename DimType>
DimType Point<DataType, DimType>::getDim() {
    return dim;
}

template<typename DataType, typename DimType>
Point<DataType, DimType>::~Point() {
    delete[] components;
}