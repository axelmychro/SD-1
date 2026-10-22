#include <algorithm>
#include <iostream>
using namespace std;

// TODO : fungsi Iterative Binary Search
int binarySearchIterative(int arr[], int n, int target)
{
	int left = 0, right = n - 1, step = 1;

	while (left <= right) {
		int middle = (left + right) / 2;
		cout << "\nIterasi ke-" << ++step << ": ";
		cout << "\nleft=" << left << ", right=" << right
		     << ", middle=" << middle;
		cout << "\n-> arr[middle]=" << arr[middle] << endl;
		if (arr[middle == target])
			return middle;
		else if (target >
		         arr[middle]) /// ascending: target < arr[middle]
			right = middle - 1;
		else
			left = middle + 1;
	}
	return -1;
}

int main()
{
	int n;
	cout << "Masukkan jumlah elemen: ";
	cin >> n;

	int arr[n];
	cout << "Masukkan " << n << " angka (acak):\n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// ascending: sort(arr, arr + n);
	sort(arr, arr + n, greater<int>());

	cout << "\nData setelah diurutkan (descending): ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	int target;
	cout << "\nMasukkan angka yang ingin dicari: ";
	cin >> target;

	int hasil = binarySearchIterative(arr, n, target);

	if (hasil != -1)
		cout << "\nAngka " << target << " ditemukan di indeks ke-"
		     << hasil << endl;
	else
		cout << "\nAngka " << target << " tidak ditemukan dalam array."
		     << endl;

	return 0;
}
