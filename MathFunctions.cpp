#include <iostream>
#include "Definition.c"

using namespace std;

int main()
{
	//Contoh
	double Kecepatan, Sudut, Jarak;
	
	cout << "Masukkan Nilai Kecepatan : "; cin >> Kecepatan;
	cout << "Masukkan Nilai Sudut     : "; cin >> Sudut;

	Jarak = 2 * Kecepatan * Kecepatan * sin(Sudut * PHI / 180) * cos(Sudut * PHI / 180) / 9.8;

	cout << endl << "Jarak                    : " << Jarak << endl;

	_getch();
	return 0;
}