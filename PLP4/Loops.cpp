#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	//For loop, which is entry controlled
	
	//Initialize; Condition; Increment;
	for (int x = 1; x <= 10; x++) {
		
		cout << "Loop Pass Number: " << x <<endl;
	}
	
	//return 0;
	
	
	
	
	//Initialize While Loop
	int a = 4;
	
	//Conditional Statement
	while (a < 10) {
		
		cout << "a meets WHILE condition" <<endl;
		
		//increment
		a++;
	}
	
	//return 0;
	
	
	
	//Intialize
	int i = 4;
	
	do {  //what the loop will do
		
		cout << "This will print and then the while\ncondition will be checked";
		
		//increment
		i ++;
		
	} while (i != 5); //i = 5 after first pass, loop prints once
	
	
	return 0;
	
}