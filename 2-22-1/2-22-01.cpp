#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void) {
	int x = 0;
	cout << "请输入一个整数：" << endl;
	cin >> x;
	cout << oct << x << endl;//8进制
	cout << dec << x << endl;//10进制
	cout << hex << x << endl;//16进制

	cout << "请输入一个布尔值(0,1):" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;
	system("pause");
	system("pause")
	return 0;
}
