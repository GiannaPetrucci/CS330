#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int x = 12;
	
	if(x == 10){
		cout << "x is equal to 10" << endl;
		
		if(x < 50){
			cout << "x is smaller than 50" << endl;
		}
	}
		
	else{
		cout << "dangling else" << endl;
	}
}