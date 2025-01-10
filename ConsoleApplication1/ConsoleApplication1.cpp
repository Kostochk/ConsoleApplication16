
#include <iostream>
#include <fstream>
using namespace std;

class Auto {
	string brand;
	int speed;
	int ves;
	int year;
public:
	Auto() {
		brand = "Nissan Skyline 34";
		speed = 150;
		ves = 300;
		year = 1995;

	}

	friend ostream& operator<<(ostream& os, const Auto& a) {
		os << "Brand: " << a.brand << "\nSpeed: " << a.speed << "\nVes: " << a.ves << "Year: " << a.year << endl;
		return os;
	}
	friend istream& operator>>(istream& is, Auto& a) {
		is >> a.brand >> a.speed >> a.ves >> a.year;
		return is;
	}
};


int main()
{

}

