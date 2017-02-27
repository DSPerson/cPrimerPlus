#include <iostream>
#include <string>
using namespace std;

class Stdudent {
public:
	void setNmae(string _name) {
		m_strName = _name;
	}
	string getName() {
		return m_strName;
	}
	void setGender(string _gender) {
		m_strGender = _gender;
	}
	string getGender() {
		return m_strGender;
	}
	int getScore() {
		return m_iScore;
	}
	void initScore() {
		m_iScore = 0;
	}
	void study(int _score) {
		m_iScore += _score;
	}

private:
	string m_strName;
	string m_strGender;
	int m_iScore;

};
int main(int argc, char const *argv[])
{
	Stdudent stu;
	stu.initScore();//int 值 必须初始化
	stu.setNmae("张三");
	stu.setGender("男人");
	stu.study(5);
	stu.study(15);
	cout << stu.getScore() << stu.getName() << stu.getGender() <<endl;
	return 0;
}