#pragma once
#include "Shape.h"


template<typename DataType, typename DimType, typename PointsNumType>
class Polygon : public Shape {
    Point<DataType, DimType>* points;
    PointsNumType point_number;
public:
    Polygon(PointsNumType point_number, Point<DataType, DimType> new_points[]);
    void show() override;
    ~Polygon();
};