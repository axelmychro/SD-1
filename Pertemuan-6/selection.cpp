#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Masukkan jumlah elemen data: ";
	cin >> n;

	int data[n];
	cout << "Masukkan elemen-elemen data: ";
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}

	// TODO: Selection Sort dari terbesar hingga terkecil
	for (int i = 0; i < n - 1; ++i) {
		int max_index = i;                       // i = 0 --> [5]
		for (int j = i + 1; j < n; ++j) {        // j = 1
			if (data[j] > data[max_index]) { // ascending: > jadi <
				max_index = j;
			}
		}
		int tmp = data[i];
		data[i] = data[max_index];
		data[max_index] = tmp;
	}

	cout << "Data setelah diurutkan dari terbesar hingga terkecil:\n";
	for (int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}
	cout << endl;

	return 0;
}
