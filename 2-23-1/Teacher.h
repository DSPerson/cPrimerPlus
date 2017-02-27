//
// Created by dsperson on 2017/2/23.
//

#ifndef INC_2_23_1_TEACHER_H
#define INC_2_23_1_TEACHER_H
#include <string>
using namespace std;
class Teacher {
public:
    //Teacher();
    Teacher(string name = "ds" ,int age = 10);
    ~Teacher();
    Teacher(const Teacher &tea);
    void setName(string _name);
    string getNmae();
    void setAge(int _age);
    int getAge();
private:
    string m_strName;
    int m_iAge;
    //const int m_iMax;
};


#endif //INC_2_23_1_TEACHER_H
