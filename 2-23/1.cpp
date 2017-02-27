//内存的本质就是资源
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	//int *p = new int(20);//申请内存 20大小
	int *p = new int[20];
	//可能含有风险 内存申请失败
	if (p == NULL)
	{

		return 0;
	}
	p[0] = 10;
	p[1] = 20;
	cout << *p << endl;//会打印首地址的值 因为*p保存的就是值
	cout << p << endl;//保存的就是p[0]的地址
	cout << p[0] << endl;
	delete []p;
	p = NULL;
	//cout << *p << endl; 访问被释放的内存会崩溃
	return 0;
}