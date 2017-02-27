#include <iostream>
#include <stdlib.h>
using namespace std;

namespace Compare {
	int getMaxOrMin(int *arr, int count, bool isMax) {
	int temp = arr[0];
	if (isMax)
	{
		/* code */
		for (int i = 1; i < count; ++i)
		{
			/* code */
			if (temp < arr[i])
			{
				temp = arr[i];
				/* code */
			}
		}
	} else {
		for (int i = 1; i < count; ++i)
		{
			/* code */
			if (temp > arr[i])
			{
				temp = arr[i];
				/* code */
			}
		}
	}
	return temp;
}
}


int main(void) {
	cout << "请输入 true or false" << endl;
	bool isMax = false;
	cin >> isMax;
	int arr[4] = {1,2,3,4};
	cout << Compare::getMaxOrMin(arr,4,isMax) << endl;
	//system("pause");
	return 0;
}




