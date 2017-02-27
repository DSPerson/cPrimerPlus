#include <iostream>
#include "Line.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Line *line = new Line(1,2,4,5);
    line->printInfo();
    delete line;
    line = NULL;

    return 0;
}