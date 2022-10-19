#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	bool thisIsCode = true;
	bool thisIsPython = false;
	
	
	cout << thisIsCode <<endl;
	cout << thisIsPython <<endl;
	
	//This program will output 1 for the first statement being true
	//the 0 for the second statement being equal to false
	
	
	if (thisIsCode == 1){
		cout << "True, this is code" <<endl;
	}
	
	
	
	
	if(100 < 12){
		cout << "100 is less than 12" << endl;
		
	}else if(thisIsPython == 0){
		cout << "False, this code is not Python";
	}
	else{
		cout << "Program will never reach this line because thisIsPython is equal to 0 which means False" <<endl;
	}
}