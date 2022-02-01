#include <stdio.h>

#include "/home/k1tt3nz/CLionProjects/untitled/libs/algorithms/array/array.h"
#include "/home/k1tt3nz/CLionProjects/untitled//libs/data_struct/dsu/point.h"


int main() {
    point a;
    inputPoint(&a);

    //point b;
    //inputPoint(&b);

    //point c = {6,11};

    //outputPoint(getMiddlePoint(a,b));

    //printf("%d", isPointBetween(a,b,c));

    swapCoordinates(a);

    outputPoint(a);

    return 0;
}