#include <iostream>
#include <list>

using namespace std;
int main(int argc, char *argv[]) {
	int x = 2; 
	int y = 7;
	int sum = x+y;
	cout<< sum<< endl;
	
	// float nums and string
	double myNum = 10.99; // float point num
	string myText = "The drink costs: ";
	
	myText = myText+std::to_string(myNum);
	
	std::cout<<myText;
	
	// boolean
	
	bool myValue = true;
	string catString = "\nPrint 1 if cat is cute: ";
	
	catString = catString+std::to_string(myValue);
	
	std::cout<<catString;
	
}

int listone() {
	
	// List
	int myints[] = {16,2,77,29};
	std::list<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
	
	//cout<<myints;	
	
	return 0;
}
