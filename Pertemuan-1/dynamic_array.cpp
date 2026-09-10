#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "jumlah elemen array: ";
	cin >> n;

	int* arr = new int[n];
	cout << "memasukkan " << n << " angka" << endl;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}

	delete[] arr;
	cout << endl;
	return 0;
}
