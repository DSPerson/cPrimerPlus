#include "Teacher.h"
#include <iostream>
using namespace std;
Teacher::Teacher() {
	m_strName = "DSperson";
	m_iAge = 20;
	cout << "Teacher()" << endl;
}
Teacher::Teacher(string name, int age) {
	m_strName = name;
	m_iAge = age;
	cout << "Teacher(string name, int age)" << endl;
}
void Teacher::setName(string _name) {
	m_strName = _name;
}
string Teacher::getName() {
	return m_strName;
}
void Teacher::setGender(string _gender) {
	m_strGender = _gender;
}
string Teacher::getGender() {
	return m_strGender;
}
void Teacher::setAge(int _age) {
	m_iAge = _age;
}
int Teacher::getAge() {
	return m_iAge;
}
void Teacher::teach() {
	cout << "要上课了" << endl;
}
int main(int argc, char const *argv[])
{
	/*Teacher t;
	t.setName("大老板");
	t.setGender("男的12--");
	t.setAge(100);
	cout << t.getName() << t.getGender() << t.getAge()  <<endl;
	t.teach();
	*/
	return 0;
};