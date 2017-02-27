//
// Created by dsperson on 2017/2/27.
//

#include "Line.h"

Line::Line(int a_x, int a_y, int b_x, int b_y):m_coorA(a_x,a_y),m_coorB(b_x, b_y) {
    cout << "Line()" << endl;
}
Line::~Line() {
    cout << "~Line()" << endl;
}
void Line::setA(int x, int y) {
    m_coorA.setX(x);
    m_coorA.setY(y);
}

void Line::setB(int x, int y) {
    m_coorB.setX(x);
    m_coorB.setY(y);
}
void Line::printInfo() {
    cout << m_coorA.getX() << m_coorA.getY()<< endl;
    cout << m_coorB.getX() << m_coorB.getY() << endl;
}