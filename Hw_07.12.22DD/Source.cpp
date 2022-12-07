#include <iostream> 
#include <string> 
#include <vector> 
#include <functional>
#include <algorithm>
#include <time.h>
#include <windows.h>
using namespace std;


class car {
	string name;
	int year;
	int price;
public:
	car() {
		name = "Not set";
		year = 0;
		price = 0;
	}
	car(string name, int year, int price) {
		this->name = name;
		this->year = year;
		this->price = price;
	}

	void print() {
		cout << string(20, '-') << "\n";
		cout << "Name: " << name << "\n";
		cout << "Year: " << year << "\n";
		cout << "Price: " << price << "\n\n";
	}


};








int main() {
	srand(time(0));

	



	





	return 0;
}