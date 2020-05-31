#pragma once
#include "Shape.h"
#include "Point.h"

template<typename DataType, typename DimType, typename PointsNumType>
class Simplex : public Shape {
    Point<DataType, DimType>* points;
    PointsNumType point_number;
public:
    Simplex(DimType dim, Point<DataType, DimType> new_points[]);
    void show() override;
    ~Simplex();
};