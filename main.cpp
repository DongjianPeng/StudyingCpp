#include <iostream>
using namespace std;

int result(int,int);

const int k = 2;

struct Point{
	int x,y;
};

int main(int argc, char** argv) {
	int z(0),b(50);
	Point a;
	cout << "input:";
	cin >> a.x >> a.y;
	z = (a.x + a.y) * k;
	z = result(z,b);
	cout << "result:" << endl;
	cout << z << endl;
}

int result(int a,int b)
{
	return a+b;
}

