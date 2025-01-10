
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

	Auto(string brand, int speed, int year, int ves) {
		this->brand = brand;
		this->speed = speed;
		this->year = year;
		this->ves = ves;
	}

	string getBrand() {
		return brand;
	}

	int getSpeed() {
		return speed;
	}

	int getVes() {
		return ves;
	}

	int getYear() {
		return year;
	}

	void writeOutFile(Auto& a) {
		ofstream outFile("auto.txt");
		if (outFile.is_open()) {
			outFile << "Brand: " << a.getBrand() << "\nSpeed: " << a.getSpeed() << "\nYear of presentation: " << a.getYear() << "\nVes: " << a.getVes() << endl;
			outFile.close();
		}

	}
	void writeInFile(Auto& a) {
		ifstream inFile("auto.txt");
		if (inFile.is_open()) {
			inFile >> a;
			cout << "Brand: " << a.getBrand() << "\nSpeed: " << a.getSpeed() << "\nYear of presentation: " << a.getYear() << "\nVes: " << a.getVes() << endl;
			inFile.close();
		}

	}


	friend ofstream& operator<<(ofstream& os, const Auto& a) {
		os << "Brand: " << a.brand << "\nSpeed: " << a.speed << "\nVes: " << a.ves << "Year: " << a.year << endl;
		return os;
	}
	friend ifstream& operator>>(ifstream& is, Auto& a) {
		is >> a.brand >> a.speed >> a.ves >> a.year;
		return is;
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

	Auto obj;

	obj.writeInFile(obj);
	obj.writeOutFile(obj);


	Auto obj2 = Auto("Toyota Mark 2", 160, 4125, 2);

	obj2.writeInFile(obj2);
	obj2.writeOutFile(obj2);


}

