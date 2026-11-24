#include "School.h"
#include <iostream>

School::School(const std::string& schoolName,
    int roomNumber, int roomCapacity)
    : name(schoolName), classroom(roomNumber, roomCapacity)
{
    std::cout << "School " << name << " created\n";
}

School::~School() {
    std::cout << "School " << name << " destroyed\n";
}

void School::print() const {
    std::cout << "School: " << name << '\n';
    classroom.print();
}