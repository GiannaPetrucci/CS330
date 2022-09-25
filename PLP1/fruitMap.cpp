// dictionaries are called maps in c++
#include <map>
#include <iostream>
using namespace std;

int main() {
	
	map<string, int> fruit_map;
	
	fruit_map.insert(pair<string, int> ("Mango", 1));
	
	fruit_map.insert(pair<string, int> ("Kiwi", 2));
	
	fruit_map.insert(pair<string, int> ("Apple", 3));
	
	fruit_map.insert(pair<string, int> ("Papaya", 4));
	
	fruit_map.insert(pair<string, int> ("Orange", 5));
	
	cout << fruit_map["Mango"] << endl;
	
	
	
}
