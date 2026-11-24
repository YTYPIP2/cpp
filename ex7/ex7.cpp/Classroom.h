#pragma once

class Classroom {
private:
    int number;    // Номер кабинета
    int capacity;  // Вместимость

public:
    Classroom(int n, int c); // Конструктор
    ~Classroom();            // Деструктор

    void print() const;      // Вывод информации
};