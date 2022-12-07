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




int menu() {
	cout << string(20, '-') << "\n";
	cout << "0 - exit\n";
	cout << "1 - print\n";
	cout << "2 - add car\n";
	cout << "3 - remove car\n";
	cout << "4 - sort year\n";
	cout << "5 - sort price\n";
	cout << "6 - find name\n";
	cout << "7 - sort price\n";
	cout << string(20, '-') << "\n";
	int choice;
	cout << "Enter choice: ";
	cin >> choice;
	cout << "\n";
	return choice;
}



int main() {
	srand(time(0));

	


	int choice;
	do
	{
		system("cls");
		choice = menu();

		switch (choice)
		{
		case 1:
			
			system("pause");
			break;
		default:
			break;
		}

	} while (choice != 0);


	





	return 0;
}