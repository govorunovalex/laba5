#pragma once
#include "Simplex.h"

template<typename DataType, typename DimType, typename PointsNumType>
Simplex<DataType, DimType, PointsNumType>::Simplex(DimType dim, Point<DataType, DimType> new_points[]) :point_number(dim + 1) {
	points = new Point<DataType, DimType>[dim + 1];
	for (PointsNumType i = 0; i < point_number; ++i) {
		if (new_points[i].getDim() != dim) throw("Not allowed point for simplex!");
		points[i] = new_points[i];
	}
}
template<typename DataType, typename DimType, typename PointsNumType>
void Simplex<DataType, DimType, PointsNumType>::show() {
	std::cout << "Simplex from points below:\n";
	for (PointsNumType i = 0; i < point_number; ++i) {
		points[i].show();
	}
}
template<typename DataType, typename DimType, typename PointsNumType>
Simplex<DataType, DimType, PointsNumType>::~Simplex() {
	delete[] points;
}
