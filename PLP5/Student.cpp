//
#include <iostream>
using namespace std;
class Person {
	
	public: // Lets us know class and objects and methods in class are public
		string name = "Bob";

	void printname() {cout << "Their name is " << name; }
};



class Student: public Person {
public:
	
	string major;
	void string_s();

	int getMajor() { 
		cout<<"Enter "<<name<<"'s Program of Study/Major:"; 
		cin>>major;
		return 0;
	}
};


void Student::string_s()
{
	printname();
	cout<<" and they study "<< major;
}



int main()
{
	
	Student s1;
	s1.getMajor();
	s1.string_s();
	return 0;
}