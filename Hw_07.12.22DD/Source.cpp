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

	void set() {
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter year: ";
		cin >> year;
		cout << "Enter price: ";
		cin >> price;
	}
	void set(string name, int year, int price) {
		this->name = name;
		this->year = year;
		this->price = price;
	}

	string getName() { return name; }
	int getYear() { return year; }
	int getPrice() { return price; }
};


class salon {
	vector<car> c;
public:
	salon() {};
	salon(int number) {
		car m("Not set", rand() % 10, rand() % 10);
		for (int i = 0; i < number; i++) {
			c.push_back(m); 
			m.set("Not set", rand() % 10, rand() % 10);
		}
	};

	void print() {
		for (int i = 0; i < c.size(); i++)
			c[i].print();
	}

	void add() {
		car m;
		m.set();
		c.push_back(m);
	}

	void del(string n) {
		for (int i = 0; i < c.size(); i++)
		{
			if (c[i].getName() == n) 
				c.erase(c.begin() + i);
		}
	}

	void findName(string n) {
		for (int i = 0; i < c.size(); i++)
		{
			if (c[i].getName() == n)
				c[i].print();
		}
	}
	void findPrice(int p) {
		for (int i = 0; i < c.size(); i++)
		{
			if (c[i].getPrice() == p)
				c[i].print();
		}
	}


};


int menu() {
	cout << string(20, '-') << "\n";
	cout << "0 - exit\n";
	cout << "1 - print\n";
	cout << "2 - add car\n";
	cout << "3 - remove car\n";
	cout << "4 - find name\n";
	cout << "5 - find price\n";
	cout << "6 - sort year\n";
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

	
	salon s(3);
	string n;
	int p, y;

	int choice;
	do
	{
		system("cls");
		choice = menu();

		switch (choice)
		{
		case 1:
			s.print();
			system("pause");
			break;
		case 2:
			s.add();
			break;
		case 3:
			cout << "Enter name: ";
			cin >> n;
			s.del(n);
			break;
		case 4:
			cout << "Enter name: ";
			cin >> n;
			s.findName(n);
			system("pause");
			break;
		case 5:
			cout << "Enter price: ";
			cin >> p;
			s.findPrice(p);
			system("pause");
			break;
		default:
			break;
		}

	} while (choice != 0);


	





	return 0;
}