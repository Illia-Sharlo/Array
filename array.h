class Array
{
private:
    int *A=nullptr; // �������� ���������� ������.
    int j=0;        // ʳ������ �������� ���������� ������.
    int step=0;     // ���� ���������� ������.

public:
    Array(); // �����������.
    ~Array(); // ����������.
    void showElements(); // ³���������� �������� ������ ������.
    void expandArray(int size); // ���������� ������.
    int getSize(); // ��������� ������� ����������� ������.
    int getElemSize(); // ��������� ������� �������� ����������� ������.
    void setArray(int * pArr, int size); // ��������� ���������� ������ � �����.
    void setValue(int value); // ��������� �������� � ��������� �����.
};
