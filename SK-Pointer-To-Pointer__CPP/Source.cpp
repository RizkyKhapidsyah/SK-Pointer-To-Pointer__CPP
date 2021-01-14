// -----------------------------//
//Penggunaan Pointer to Pointer //
//------------------------------//

#include <iostream>
#include <conio.h>

/* Created by Rizky Khapidsyah */

using namespace std;

int main() {
	int ilham;
	int* riky; //pointer ke variabel
	int** amir; //pointer pada pointer
	
	ilham = 75;
	cout << "Nilai ILHAM = " << ilham << endl;
	//-> Penugasan Ke Alamat Memori
	riky = &ilham;
	amir = &riky;

	cout << "Nilai RIKY Hasil Mengakses ILHAM = ";
	cout << *riky << endl;
	cout << "Nilai AMIR Hasil Mengakses ILHAM = ";
	cout << **amir << endl;

	_getch();
	return 0;
}