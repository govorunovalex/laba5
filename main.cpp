#include "Container.h"
#include "ContainerImpl.h"
#include "Point.h"
#include "PointImpl.h"
#include "Cube.h"
#include "CubeImpl.h"
#include "Line.h"
#include "LineImpl.h"
#include "Circle.h"
#include "CircleImpl.h"
#include "Polygon.h"
#include "PolygonImpl.h"
#include "Square.h"
#include "SquareImpl.h"
#include "Simplex.h"
#include "SimplexImpl.h"


int main() {
    float data0[] = { 1.f,2.f,3.f,4.f };
    Point<float, int> p0(4, data0);
    p0.show();
    float data1[] = { -5.f,13.f,33.f,14.f };
    Point<float, int> p1(4, data1);
    float data2[] = { -5.f,13.f,3.f,14.f };
    Point<float, int> p2(4, data2);
    float data3[] = { -15.f,13.f,33.f,14.f };
    Point<float, int> p3(4, data3);
    float data4[] = { -5.f,13.f,33.f,9.f };
    Point<float, int> p4(4, data4);

 Line<float, int> l0(p0, p1);
    l0.show();

    Circle<float, int> c0(p0, p1);
    c0.show();

    Cube<float, int> cu0(p0, p1);
    cu0.show();

    Square<float, int> s0(p0, p1);
    s0.show();

    Point<float, int> pl_points[4] = { p1, p2, p3, p4 };
    Polygon<float, int, int> pl0(4, pl_points);
    pl0.show();

    Point<float, int> s_points[5] = { p0, p1, p2, p3, p4 };
    Simplex<float, int, int> si0(4, s_points);

    si0.show();

    Container<int16_t> container;
    container.add(p0);
    container.add(p3);
    container.add(c0);
    container.add(si0);
    container.add(pl0);
    container.add(cu0);
    container.remove(0);
    container.remove(4);
    container.print();
    container.print(2);
    container.print(122);

    return 0;
}
