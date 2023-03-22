#include <iostream>

using namespace std;

// Membuat fungsi
void cetakElemenArray(int array[], int jumlahElemenArray);
int getNilaiTerbesar(int array[], int jumlahElemenArray);
float getNilaiAverage(int array[], int jumlahElemenArray);
int getNilaiTerkecil(int array[], int jumlahElemenArray);

int main()
{
	// Memasukan size dari array
	int jumlahElemenArray;
	cout << "Masukan jumlah elemen pada Array : ";
	cin >> jumlahElemenArray;

	int* nilaiArray = new int[jumlahElemenArray];

	// Memasukan nilai kedalam array
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		cout << "Input nilai array ke-" << i << " = ";
		cin >> nilaiArray[i];
	}

	// Deklarasikan hasil filtering
	int nilaiTerbesar = getNilaiTerbesar(nilaiArray, jumlahElemenArray);
	float nilaiAverage = getNilaiAverage(nilaiArray, jumlahElemenArray);
	int nilaiTerkecil = getNilaiTerkecil(nilaiArray, jumlahElemenArray);

	// Menampilkan hasil akhir
	system("cls");
	cetakElemenArray(nilaiArray, jumlahElemenArray);
	cout << "Nilai terbesar adalah : " << nilaiTerbesar << endl;
	cout << "Nilai rata-rata adalah : " << nilaiAverage << endl;
	cout << "Nilai terkecil adalah : " << nilaiTerkecil << endl;

	system("pause");
	return 0;
}

// Menampilkan semua nilai dari dalam array
void cetakElemenArray(int array[], int jumlahElemenArray)
{
	cout << endl;
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl << endl;
}

// Membuat rumus pada masing-masing fungsi
int getNilaiTerbesar(int array[], int jumlahElemenArray)
{
	int nilai = 0;
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		if (nilai < array[i])
		{
			nilai = array[i];
		}
	}
	return nilai;
}
float getNilaiAverage(int array[], int jumlahElemenArray)
{
	float nilai = 0;
	float jmlh = 0;
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		jmlh = jmlh + array[i];
	}
	nilai = (jmlh / jumlahElemenArray);

	return nilai;
}
int getNilaiTerkecil(int array[], int jumlahElemenArray)
{
	int nilai = array[0];
	for (int i = 0; i < jumlahElemenArray; i++)
	{
		if (nilai > array[i])
		{
			nilai = array[i];
		}
	}
	return nilai;
}