#ifndef COURSE_VECTOR_H
#define COURSE_VECTOR_H

#include <stdio.h>

typedef struct vector{
    int *data;          //Указатель на элементы вектора
    size_t size;        //Размер вектора
    size_t capacity;    //Вместимость вектора
}vector;

#include "vector.c"
#endif //COURSE_VECTOR_H