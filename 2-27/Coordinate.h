//
// Created by dsperson on 2017/2/27.
//

#ifndef INC_2_27_COORDINATE_H
#define INC_2_27_COORDINATE_H

#include <iostream>
using  namespace std;

class Coordinate {
public:

    Coordinate(int x, int y);
    ~Coordinate();
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();

private:
    int m_iX;
    int m_iY;
};


#endif //INC_2_27_COORDINATE_H
