#include <iostream>
#include "School.h"

int main() {
    std::cout << "Program started\n";

    {
        School school("School 7", 101, 30);

        school.print();
    }

    std::cout << "Program finished\n";

    return 0;
}