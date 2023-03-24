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


	for (int i = 0; i < n; i++) //menggunakan pengulangan for untuk menyimpan data pada array
	{
		cout << "data ke-" << (i + 1) << ": "; //memasukkan atau meninput nilai data n
		cin >> arr[1]; //menyimpan nilai data n kedalam array arr
	}
}

void insertionsort() { //procedure inserionsort

	int temp; //membuat variabel data temporer atau penyimpanan sementara
	int j; //membuat variabel j sebagai penanda

	for (int i = 1; 1 < n; i++) { // 1. looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i]; // 2. simpan nilai arr[i] ke variabel semepnatara temp

		j = i - 1; // 3. setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp) // 4. looping while dimana nilai j lebih besar sama dengan 0 dan arr[j] lebih besar daripada temp

		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = temp;


		cout << "\nPass" << i << ": ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << ": ";
		}
	}
}