#include <iostream>
#include <vector>
using namespace std;

// TODO: Fungsi Bergabung Kembali (Merge)
void merge(vector<int>& arr, int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;

	// Buat array sementara
	vector<int> L(n1);
	vector<int> R(n2);

	// Salin data ke array sementara L dan R
	for (int i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];

	// Gabungkan kembali array sementara ke arr[left..right]
	int i = 0;    // Indeks awal subarray pertama
	int j = 0;    // Indeks awal subarray kedua
	int k = left; // Indeks awal subarray gabungan

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Salin sisa elemen dari L jika ada
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Salin sisa elemen dari R jika ada
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// TODO: Memecah Barisan (Merge Sort)
void mergeSort(vector<int>& arr, int left, int right)
{
	if (left < right) {
		// Cari titik tengah untuk membagi array menjadi dua
		int mid = left + (right - left) / 2;

		// Urutkan paruh pertama dan kedua secara rekursif
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		// Gabungkan kedua paruh yang sudah terurut
		merge(arr, left, mid, right);
	}
}

void printArray(const vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int n;
	cout << "Masukkan jumlah elemen data: ";
	cin >> n;

	vector<int> data(n);
	cout << "Masukkan elemen-elemen data: ";
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}

	cout << "Array sebelum diurutkan: ";
	printArray(data);

	mergeSort(data, 0, n - 1);

	cout << "Array setelah diurutkan: ";
	printArray(data);

	return 0;
}
