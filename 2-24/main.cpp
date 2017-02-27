#include <iostream>
#include "Coordinate.h"
#include <string>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;

    Coordinate coor[3];
    coor[0].m_iX = 1;
    coor[0].m_iY = 2;
    Coordinate *coorP = new Coordinate[3];
    coorP->m_iX = 3;//==coorP[0]
    coorP[0].m_iY = 4;
    coorP++;
    coorP->m_iX = 5;
    coorP[0].m_iY = 6;
    coorP ++;
    coorP[0].m_iX = 7;
    coorP[0].m_iY = 8;

    for (int i = 0; i < 3; ++i) {
        cout << "次数" << endl;
        cout << coorP[0].m_iX << endl;
        coorP--;
    }
    coorP++;
    delete[]coorP;
    coorP = NULL;

    return 0;
}