#include <iostream>
#include "array.h"
#include <random>

int main()
{
    Array arr;
    int *A2=nullptr;
    int *A3=nullptr;
    int value=0;
    int size_A2=0, size_A3=0;

// ������������ ������� ������� ������.
    size_A2=9;
    std::cout<<"size_A2= "<<size_A2<<std::endl;

// ����������� ������� ������.
    A2=new int[size_A2];
    for (int i=0; i<size_A2; i++)
        {
            A2[i]=rand()%(1-20+1)+20;
            std::cout<<A2[i]<<" ";
        }
    std::cout<<std::endl;

// ������������ ������� �������� ������.
    size_A3=7;
    std::cout<<"size_A3= "<<size_A3<<std::endl;

// ����������� �������� ������.
    A3 = new int[size_A3];
    for (int i=0; i<size_A3; i++)
        {
            A3[i]=rand()%(31-50+1)+50;
            std::cout<<A3[i]<<" ";
        }
    std::cout<<std::endl;

// ��������� ���������� ������.
    arr.setArray(A2,size_A2);

// ³���������� �������� ������.
    arr.showElements();

// ������������ ������� �������� ������.
    int value_numb;
    std::cout<<"value_numb= ";
    std::cin>>value_numb;

    for (int i=0; i<value_numb; i++)
        {
            int t=i+1;
            value=rand()%(61-80+1)+80;
            std::cout<<"value_n "<<t<<": "<<value<<std::endl;
            arr.setValue(value);
        }

// ��������� ���������� ������.
    arr.setArray(A3,size_A3);

// ³���������� �������� ������.
    arr.showElements();

// ��������� ������� ������.
    std::cout<<"Array size: "<<arr.getSize()<<std::endl;

// ������������ ������� ������ �� ���� ����������.
    int expand=10;
    arr.expandArray(expand);

// ³���������� ������� ����������� ������.
    std::cout<<"New array size: "<<arr.getSize()<<std::endl;

// ³���������� ������� �������� � ����������� �����.
    std::cout<<"Elements amount: "<<arr.getElemSize()<<std::endl;

    arr.showElements();

    delete []A2;
    A2=nullptr;

    delete []A3;
    A3=nullptr;

    return 0;
}
