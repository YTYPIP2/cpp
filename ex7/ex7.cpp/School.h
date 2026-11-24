#pragma once

#include <string>
#include "Classroom.h"

class School {
private:
    std::string name;    // Название школы
    Classroom classroom; // Композиция: кабинет принадлежит школе

public:
    School(const std::string& schoolName, int roomNumber, int roomCapacity);
    ~School();

    void print() const;
};