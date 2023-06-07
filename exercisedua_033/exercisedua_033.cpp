#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
	string input[6];

public:
	bidangDatar(int px) : 
		x(px){
		x = 0;
		cout << "Lingkaran dibuat" << endl;
	}
	virtual void input(int x, string value) {
		input[x] = value;
	} 
	virtual float Luas(int a, int b) {
		3, 14 * a * a;
		cout << "luas lingkaran = " << x << endl;
		return 0; } 
	virtual float Keliling(int a) {
		2 * 3, 14 * a * a;
		cout << "Keliling lingkaran = " << x << endl;
		return 0; } 
	void setX(int a) { 
		this->x = a;
		bidangDatar::Luas;
		bidangDatar::Keliling;
		
	}
	int getX() { 
		 
		return x;
	}
};
class Lingkaran :public bidangDatar { 
public:
	int x;
	int a;
	Lingkaran(int px) :
		x(px)	{
		x = 0;
		cout << "Lingkaran dibuat" << endl;
	}
	string input() {
		cout << "masukan jejari= " << endl;
		cin >> a;
	}

};
class Bujursangkar :public bidangDatar { 
public:
	int x;
	int a;
	Bujursangkar(int px) :
		x(px) {
		x = 0;
		cout << "Bujursangkar dibuat" << endl;
	}
	string input() {
		cout << "masukan sisi= " << endl;
		cin >> a;
	}
};
int main() {
	Lingkaran b;
	b.getX();
	b.setX();

}
