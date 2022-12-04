//
#include <iostream>
using namespace std;
class Person {
	
	public: // Lets us know class and objects and methods in class are public
		string name;

	void printname() {cout << "Their name is " << name; }
};



int main()
{
	// Declare an object of person class
	Person p1;
	
	p1.name = "Bob";
	
	p1.printname();
	return 0;
}