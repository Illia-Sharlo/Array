#include <iostream>
#include "array.h"

// �����������. �������� �������� ������.
Array::Array()
{
    if (A==nullptr)
        {
            A=new int[100];
        }
}

// ����������. ��������� ������.
Array::~Array()
{
    delete []A;
    A=nullptr;
}

// ³���������� �������� ������.
void Array::showElements()
{
    for (int i=0; i<j; i++)
        {
            std::cout<<A[i]<<" ";
        }
    std::cout<<std::endl;
}

// ��������� ������ ������.
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

// ��������� ������ ������.
int Array::getSize()
{
    return step;
}

// ��������� ������� �������� ������.
int Array::getElemSize()
{
    return j;
}

// ��������� ���������� ������ � ���������.
void Array::setArray(int *pArr, int size)
{
    for (int i=0; i<size; i++, j++)
        {
            A[j]=pArr[i];
        }
}

// ��������� �������� � �����.
void Array::setValue(int value)
{
    A[j]=value;
    j++;
}


