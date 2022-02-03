#ifndef INC_ARRAY_H
#define INC_ARRAY_H

#include <stddef.h>

///----------Вспомогательные---------///

void swap(int *a, int *b);

int max2(const int a, const int b);

int min2(const int a, const int b);

///----------ВВод вывод----------///

///Ввод массива array размера size
void inputArray(int *array, const size_t size);

///Ввод динамически расширяемого массива array
void inputArrayDynamic(int **array, size_t *size);

///Вывод массива array размера size
void outputArray(const int *array, const size_t size);

///----------Функции предикаты ----------///

int isEven(const int number);

int isDigit(const char symbol);

int isPositiveNumber(const int number);

///----------Поиск----------///

///Линейный поиск позиции по ключу x в массиве array размера size
int linearSearchPositionX(const int *array, const size_t size, const int x);

int linearFindFast(int *array, const size_t size, const int x);

int binarySearch(const int *array, const size_t size, const int x);


///----------Проверка сортировки----------///


///----------Сортировка----------///

///Сортировка массива array размера size выбором
void selectionSort(int *array, const size_t size);

void insertionSort(int *array, const size_t size);

void bubbleSort(int *array, const size_t size);

#include "array.c"

#endif //INC_ARRAY_H
