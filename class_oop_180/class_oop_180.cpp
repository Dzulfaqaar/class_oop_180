#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM= " << nim;
		cout << "\nNama= " << nama;
	}
};

class Matakuliah {
private :
	int sks;
	string kode;
	string namaMK;
public :
	void inputMK() {
		cout << "Masukan jumlah SKS= ";
		cin >> sks;
		cout << "Masukan kode MK= ";
		cin >> kode;
		cout << "Masukan Nama MK= ";
		cin >> namaMK;
	}
	void tampilMK() {
		cout << "\nJumlah SKS= " << sks;
		cout << "\nKode= " << kode;
		cout << "\nNama= " << namaMK << endl;
	}
};

int main() {
	Mahasiswa mhs;
	Matakuliah mk;
	
	cout << "input data mahasiswa" << endl;
	cout << "Masukan NIM: ";
	cin >> mhs.nim;
	cout << "Masukan nama: ";
	cin >> mhs.nama;
	
	cout << "\ninput data mata kuliah:" << endl;
	mk.inputMK();

	cout << "\nData mahasiswa:\n";
	mhs.tampil();

	cout << "\n\nData Matakuliah:";
	mk.tampilMK();
}

