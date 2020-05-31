#pragma once
#include "Polygon.h"

template<typename DataType, typename DimType, typename PointsNumType>
Polygon<DataType, DimType, PointsNumType>::Polygon(PointsNumType point_number, Point<DataType, DimType> new_points[]) :point_number(point_number) {
	points = new Point<DataType, DimType>[point_number];
	for (PointsNumType i = 0; i < point_number; ++i) {
		points[i] = new_points[i];
	}
}


template<typename DataType, typename DimType, typename PointsNumType>
void Polygon<DataType, DimType, PointsNumType>::show() {
	std::cout << "Polygon from points below:\n";
	for (PointsNumType i = 0; i < point_number; ++i) {
		points[i].show();
	}
}

template<typename DataType, typename DimType, typename PointsNumType>
Polygon<DataType, DimType, PointsNumType>::~Polygon() {
	delete[] points;
}