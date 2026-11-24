#include "Classroom.h"
#include <iostream>

Classroom::Classroom(int n, int c) {
    number = n;
    capacity = c;

    std::cout << "Classroom " << number << " created\n";
}

Classroom::~Classroom() {
    std::cout << "Classroom " << number << " destroyed\n";
}

void Classroom::print() const {
    std::cout << "Classroom: " << number << '\n';
    std::cout << "Capacity: " << capacity << '\n';
}