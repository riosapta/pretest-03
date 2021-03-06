/*Pretest - 03
Nama : Rio Sapta Samudera
NPM  : 140810180030
*/

#include "pch.h"
#include <iostream>
using namespace std;

struct r_mhs {
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int&n) {
	cout << "Masukkan banyak data: "; cin >> n;
}
void inputMhs(larikMhs& mhs, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Mahasiswa ke " << i + 1;
		cout << "NPM   : "; cin >> mhs[i].npm;
		cout << "Nama  : "; cin >> mhs[i].nama;
		cout << "IPK   : "; cin >> mhs[i].ipk;
	}
}

void cetakMhs(larikMhs mhs, int n) {
	for (int j = 0; j < 30; j++) {
		cout << "=";
	}
	cout << "No   NPM              Nama                    IPK";
	for (int j = 0; j < 30; j++) {
		cout << "-";
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "   " << mhs[i].npm << "   " << mhs[i].nama << "    " << mhs[i].ipk << endl;
	}
	for (int j = 0; j < 30; j++) {
		cout << "=";
	}
}

void sortNama(larikMhs& mhs, int n) {
	int a, b, temp;
	for (int i = 0; i < n; i++) {
		// if char mhs[i].nama < char mhs[i+1].nama then swap
		// swap = mhs[i].nama=temp, mhs[i].nama
	}
}

int main()
{
	int a;
	larikMhs arrayMhs;
	banyakData(a);
	inputMhs(arrayMhs, a);
	sortNama(arrayMhs, a);
	cetakMhs(arrayMhs, a);
}

