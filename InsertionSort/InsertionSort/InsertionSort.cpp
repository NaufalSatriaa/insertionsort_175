#include <iostream>
using namespace std;

int arr[30]; //membuat array dengan panjang data 20
int n; //membuat variable inputan n

void input() { //procedure input
	while (true)
	{
		cout << "masukkan jumlah data pada array : "; //membuat inputan jumlah element array
 		cin >> n; //memanggil variabel inputan n

		if (n <= 20) { //membuat kondisi n tidak lebih dari 20
			break;
		}
		else {
			cout << "\narray yang anda masukkan maksimal 20 elemen.\n"; //menampilkan pesan jika data lebih dari 20

		}
	}
	cout << endl; //membuat jarak per baris program
	cout << "=====================" << endl; //membuat tampilan susunan data element array
	cout << "masukkan elemen array" << endl;
	cout << "=====================" << endl;
}