#include "iostream"
using namespace std;

void function1(int &x, int y) // x passed by reference
{
	x+=y;
}

void function2(int x, int y) // x passed by value
{
	x+=y;
}

int main()
{
	int x=10;
	function1(x, 10);  // x is passed by reference 
	cout << x << endl; // 20
	function2(x, 1000);// x is passed by value
	cout << x << endl; // 20
}

