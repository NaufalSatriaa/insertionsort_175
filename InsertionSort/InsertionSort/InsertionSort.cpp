#include <iostream>
using namespace std;

int arr[30]; //membuat array dengan panjang data 20
int n; //membuat variable inputan n

void input() { //procedure input
	while (true)
	{
		cout << "masukkan jumlah data pada array : ";
		cin >> n;
		if (n <= 20) {
			break;
		}
		else {
			cout << "\narray yang anda masukkan maksimal 20 elemen.\n";

		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "masukkan elemen array" << endl;
	cout << "=====================" << endl;
}