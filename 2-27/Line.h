//
// Created by dsperson on 2017/2/27.
//

#ifndef INC_2_27_LINE_H
#define INC_2_27_LINE_H

#include <iostream>
#include "Coordinate.h"
using namespace std;

class Line {
public:
    Line(int a_x, int a_y, int b_x, int b_y);
    ~Line();
    void setA(int x, int y);
    void setB(int x, int y);
    void printInfo();
private:

    Coordinate m_coorA;
    Coordinate m_coorB;

};


#endif //INC_2_27_LINE_H
