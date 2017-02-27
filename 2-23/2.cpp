#include <iostream>
using namespace std;
#include <string>
class Coordinate {
public:
	int x;
	int y;
	void printX() {
		cout << x << endl;
	}
	void printY() {
		cout << y << endl;
	}
};
int main(int argc, char const *argv[])
{
	Coordinate coor;
	coor.x = 10;
	coor.y = 20;
	coor.printX();
	coor.printY();

	Coordinate *p = new Coordinate();
	if (p == NULL)
	{
		return 0;
	}
	p->x = 100;
	p->y = 200;
	p->printX();
	p->printY();
	delete p;
	p = NULL;
	cout << "1" << endl;
	
	return 0;
}