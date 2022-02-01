#include <stdio.h>
#include <malloc.h>
#include <float.h>

#include "point.h"

//----------------

double additionCoordinatesX(point p1, point p2){
    return p1.x + p2.x;
}

double subtractionCoordinatesX(point p1, point p2){
    return p1.x - p2.x;
}

double additionCoordinatesY(point p1, point p2){
    return p1.y + p2.y;
}

double subtractionCoordinatesY(point p1, point p2){
    return p1.y - p2.y;
}

void swapCoordinates(point p){
    double t = p.x;
    p.x = p.y;
    p.y = t;
}

//----------------

void inputPoint(point *p) {
    scanf("%lf %lf", &p->x, &p->y);
}

void outputPoint(point p) {
    printf("%.3f %.3f\n", p.x, p.y);
}

void inputPoints(point *points, const size_t size) {
    for (int i = 0; i < size; ++i) {
        inputPoint(&points[i]);
    }
}

void outPutPoints(point *points, const int size) {
    for (int i = 0; i < size; ++i) {
        outputPoint(points[i]);
    }
}

point getMiddlePoint( point p1,  point p2){
    double middleX = additionCoordinatesX(p1,p2) / 2;
    double middleY = additionCoordinatesY(p1,p2) / 2;
    return (point) {middleX, middleY};
}

int isEqualPoint( point p1,  point p2){
    double x = subtractionCoordinatesX(p2,p1) / 2;
    double y = subtractionCoordinatesY(p2,p1) / 2;
    return x < DBL_EPSILON && y < DBL_EPSILON;
}

int isPointBetween(point p1, point p2, point p3){
    point middlePoint = getMiddlePoint(p1,p2);
    return (isEqualPoint(middlePoint,p3));
}