#include <iostream>
using namespace std;
//Function must be declared before Main

int product(int a, int b); //function declaration

int main(int argc, char *argv[]) {
	
	int numA; 
	int numB;
	int result;
	
	cout << "Enter a number: " <<endl;
	cin>>numA; //stores number in numA
	
	cout << "Enter another number: "<<endl;
	cin>>numB; //stores second number
	
	result = product(numA, numB); //Calls function and saves into result
	
	cout << "Product is: "<<result <<endl;
	return 0;
	
}

//The function declaration must be before main but the definition can
//occur afterwards
int product(int a, int b)
{
	return (a*b); //what the function is actually doing
}