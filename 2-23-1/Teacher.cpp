//
// Created by dsperson on 2017/2/23.
//

#include <iostream>
#include "Teacher.h"

/*Teacher::Teacher()  {
    m_strName = "DSperson";
    m_iAge = 25;
    cout << "Teacher()" << endl;
}

 */
Teacher::Teacher(string name, int age ): m_strName(name), m_iAge(age) {
    //m_strName = name;
   //m_iAge = age;
    cout << "我是初始化列表" << endl;
}
Teacher::~Teacher() {
    cout << "我是析构函数" << endl;
}

Teacher::Teacher(const Teacher &tea) {
    cout << "拷贝构造函数" << endl;
}
void Teacher::setName(string _name) {
    m_strName = _name;
}

string Teacher::getNmae() {
    return m_strName;
}

void Teacher::setAge(int _age) {
    m_iAge = _age;
}
int Teacher::getAge() {
    return m_iAge;
}






