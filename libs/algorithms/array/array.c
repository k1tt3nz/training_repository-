#include <stdio.h>
#include <malloc.h>

#include "array.h"

///----------Вспомогательные---------///

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int max2(const int a, const int b) {
    return a > b ? a : b;
}

int min2(const int a, const int b) {
    return a < b ? a : b;
}

///----------ВВод вывод----------///

void inputArray(int *array, const size_t size) {
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }
}

void inputArrayDynamic(int **array, size_t *size) {
    int maxSize = 1;
    *array = malloc(sizeof(int) * maxSize);

    int i = 0;
    while (1) {
        int value;
        scanf("%d", &value);

        if (value == 0)
            break;

        if (i == maxSize) {
            maxSize *= 2;
            *array = realloc(*array, sizeof(int) * maxSize);
        }

        (*array)[i++] = value;
    }
    *array = realloc(*array, sizeof(int) * i);
    *size = i;
}

void outputArray(const int *array, const size_t size) {
    for (int i = 0; i < size; ++i)
        printf("%d ", array[i]);
    printf("\n");
}

///----------Функции предикаты ----------///

int isEven(const int number) {
    return number % 2 == 0;
}

int isDigit(const char symbol) {
    return symbol >= '0' && symbol <= '9';
}

int isPositiveNumber(const int number) {
    return number > 0;
}

///----------Поиск----------///

int linearSearch(const int *array, const size_t size, const int x) {
    int i = 0;
    while (i < size && array[i] < x) {
        i++;
    }
    return i < size && array[i] == x ? i : -1;
}

int linearFindFast(int *array, const size_t size, const int x) {
    array[size] = x;

    int i = 0;
    while (array[i] != x) {
        i++;
    }

    return i == size ? -1 : i;
}

int binarySearch(const int *array, const size_t size, const int x){
    int left = -1;
    int right = size;
    while (right - left > 1){
        int middle = (left + right) / 2;
        if (array[middle] <= x)
            left = middle;
        else
            right = middle;
    }
    return left;
}


///----------Проверка сортировки----------///

///----------Сортировка----------///

void selectionSort(int *array, const size_t size) {
    for (int i = 0; i < size; ++i) {
        int minPos = i;
        for (int j = i + 1; j < size; ++j) {
            if (array[j] < array[i])
                minPos = j;
        }
        swap(&array[i], &array[minPos]);
    }
}

void insertionSort(int *array, const size_t size) {
    for (int i = 1; i < size; ++i) {
        int t = array[i];
        int j = i;
        while (j > 0 && array[j - 1] > t) {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = t;
    }
}

void bubbleSort(int *array, const size_t size) {
    for (int i = 0; i < size; ++i) {
        for (int j = size - 1; j < size; --j) {
            if (array[j - 1] > array[j])
                swap(array[j], array[j]);
        }
    }
}

