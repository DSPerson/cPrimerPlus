#include <iostream>
using namespace std;
int main(void)
{
    //定义常量count
     int count = 3;
     int *p =  &count;
    //打印count次字符串Hello C++
	for(int i = 0; i < *p; i++)
	{
		cout << "Hello imooc" << endl;
	} 
	return 0;
}