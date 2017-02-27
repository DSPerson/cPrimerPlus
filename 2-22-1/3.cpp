#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct {
	int x;
	int y;
}Rect;

void fun1(int &a, int &b);
int main(int argc, char const *argv[])
{
	/*int a = 10;
	int &b = a;
	b = 11;
	cout << b << a;
	cout << "ds" << endl;
    */
	
	/*Rect rect;
	Rect &rect1 = rect;
	rect1.x = 100;
	rect1.y = 200;
	cout << rect.x << rect.y << endl;
	*/
	
	/*int a = 10;
	int *p = &a;//这么定义只是证明p是个指针 等号后面是取出地址
	int *&q = p;//给指针p起别名q
	*p = 10;*/
	int x = 10;
	int y = 20;
	cout << x << "," << y << endl;
	fun1(x, y);
	cout << x << "," << y << endl;
	return 0;
}
void fun1(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}