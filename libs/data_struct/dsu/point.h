#ifndef COURSE_POINT_H
#define COURSE_POINT_H

typedef struct point {
    double x;
    double y;
} point;

//-----------

double additionCoordinatesX(point p1, point p2);

double subtractionCoordinatesX(point p1, point p2);

double additionCoordinatesY(point p1, point p2);

double subtractionCoordinatesY(point p1, point p2);

void swapCoordinates(point p);

//-----------

///ВВод точки a по координатам (x,y)
void inputPoint(point *p);

///ВыВод точки a с координатами (x,y)
void outputPoint(point p);

void inputPoints(point *points, const size_t size);

void outPutPoints(point *points, const int size);

point getMiddlePoint( point p1,  point p2);

int isEqualPoint( point p1,  point p2);

int isPointBetween(point p1, point p2, point p3);

#endif //COURSE_POINT_H
