#include <iostream>
using namespace std;

int a[20];
int n;


double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double r) {
	if (r >= 70) {
		return "Diterima";
	}
	else {
		return "Ditolak";
	}
}

int main() {
	string namaMahasiswa;
	double nilaiMatematika, nilaiBahasainggris;
	int jumlahmahasiswa;

	cout << "masukkan nama Mahasiswa : ";
	cin >> namaMahasiswa;
	cout << "masukkan nilai Matematika :";
	cin >> nilaiMatematika;
	cout << "masukkan nilai bahas inggris : ";
	cin >> nilaiBahasainggris;
	cout << endl;



	cout << "Nilai rata - rata nya : " << rerata(nilaiMatematika, nilaiBahasainggris);
	cout << "\nstatus kelulusannya : " << status(rerata(nilaiMatematika, nilaiBahasainggris));


	for (int i = 0; i < jumlahmahasiswa; i++) {
		cout << namaMahasiswa[i] << "\t\t" << status << endl;
	}

	return 0;
}