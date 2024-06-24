#include <iostream>
#include "array.h"

// Конструктор. Перевірка наявності масиву.
Array::Array()
{
    if (A==nullptr)
        {
            A=new int[100];
        }
}

// Деструктор. Видалення масиву.
Array::~Array()
{
    delete []A;
    A=nullptr;
}

// Відображення елементів масиву.
void Array::showElements()
{
    for (int i=0; i<j; i++)
        {
            std::cout<<A[i]<<" ";
        }
    std::cout<<std::endl;
}

// Збільшення розміру масиву.
void Array::expandArray(int size)
{
    step=size;
    int *temp_A=new int[step+j];
    for (int i=0; i<j; i++)
        {
            temp_A[i]=A[i];
        }
    A=temp_A;

    step=step+j;

    temp_A=nullptr;
}

// Отримання розміру масиву.
int Array::getSize()
{
    return step;
}

// Отримання кількості елементів масиву.
int Array::getElemSize()
{
    return j;
}

// Додавання звичайного масиву у створений.
void Array::setArray(int *pArr, int size)
{
    for (int i=0; i<size; i++, j++)
        {
            A[j]=pArr[i];
        }
}

// Додавання елементів в масив.
void Array::setValue(int value)
{
    A[j]=value;
    j++;
}


