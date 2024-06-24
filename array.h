class Array
{
private:
    int *A=nullptr; // Вказівник звичайного масиву.
    int j=0;        // Кількість елементів звичайного масиву.
    int step=0;     // Крок розширення масиву.

public:
    Array(); // Конструктор.
    ~Array(); // Деструктор.
    void showElements(); // Відображення елементів нового масиву.
    void expandArray(int size); // Розширення масиву.
    int getSize(); // Отримання довжини розширеного масиву.
    int getElemSize(); // Отримання кількості елементів розширеного масиву.
    void setArray(int * pArr, int size); // Додавання звичайного масиву у новий.
    void setValue(int value); // Додавання елементів у звичайний масив.
};
