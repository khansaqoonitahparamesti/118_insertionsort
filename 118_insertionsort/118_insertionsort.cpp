// 118_insertionsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int n;
int arr[11];
void input() {  // prosedur untuk input
	while (true) {   //looping
		cout << "Masukkan banyaknya elemen pada array : "; //output kelayar
		cin >> n; // input dari pengguna
		if (n <= 20) //jika n kurng dari atau sama dengan 20
			break;  // keluar dari loop
		else {       // jika n lebih dari 20
			cout << "\n Array dapat mempunyai  makasimal lebih dari 20 elemen. \n"; /// output kelayar
		}
	}
	cout << endl;                              //output baris kosong
	cout << "==================" << endl;     // ouput kelayar
	cout << "masukkan elemen array" << endl;  // output kelayar
	cout << "===================" << endl;    // output kelayar

	for (int i = 0; i < n; i++) {        // looping dengan i dimulai dari 0 hingga n-1
		cout << " Data ke-" << (i + 1) << ": ";  // ouput kelayar
		cin >> arr[i];                            // input dari pengguna
	}
}

void insertionsort() {
	int i, n, temp, j;
	for (i = 1; i <= n - 1; i++) //step 1
	{
		temp = arr[i];//step 2
		j = i - 1; //step 3
		while (j >= 0 && arr[j] > temp) // step 4
		{
			arr[j + 1] = arr[j];//step 4a
			j = j - 1;//step 4b
		}
	}   arr[j + 1] = temp;//step 5
}
void display() {
	cout << endl;
	cout << "====================" << endl;
	cout << "element Array yang telah tersusun" << endl;
	cout << "=====================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << "jumalah pass =" << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	insertionsort();
	display();
}

