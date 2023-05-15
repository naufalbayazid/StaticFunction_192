#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int); //constructor
	~angka(); //destructor
	void cetaData();
	void isiData();
};
//Definisi member Function
angka::angka(int i) { //constructor
	panjang = i;
	arr = new int[i];
	isiData();
}