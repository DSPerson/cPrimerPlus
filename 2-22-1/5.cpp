#include <iostream>
#include <stdlib.h>
using namespace std;
void fun(int i = 30,int j = 20, int k = 10);
void fun(double i, double j);
int main(int argc, char const *argv[])
{
	fun(1.1,2.2);
	fun();
	return 0;
}
void fun(int i ,int j, int k) {
	cout << i << j << k << endl;
}
void fun(double i, double j) {
	cout << i << j << endl;
}