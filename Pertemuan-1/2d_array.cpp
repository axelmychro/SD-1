#include <iostream>
using namespace std;

int main()
{
	int jumlah_mahasiswa = 3;
	int jumlah_pelajaran = 4;

	int nilai[jumlah_mahasiswa][jumlah_pelajaran] = {
	    {80, 75, 90, 85}, {70, 60, 88, 77}, {95, 85, 92, 89}};

	for (int i = 0; i < jumlah_mahasiswa; ++i) {
		cout << "mahasiswa " << i + 1 << ": ";
		for (int j = 0; j < jumlah_pelajaran; ++j) {
			cout << nilai[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}
