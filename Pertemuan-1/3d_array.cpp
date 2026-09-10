#include <iostream>
using namespace std;

int main()
{
	int main_array[2][3][4];
	int filling = 1;

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 4; ++k) {
				main_array[i][j][k] = filling;
				filling += 2;
			}
		}
	}

	for (int i = 0; i < 2; ++i) {
		cout << "Tabel " << i + 1 << endl;
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 4; ++k) {
				// cout << "Baris " << k + 1 << endl;
				cout << main_array[i][j][k] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
