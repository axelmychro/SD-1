#include <iostream>
#include <string>
using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

void push(char value)
{
	++top;
	stack[top] = value;
	cout << "Karakter ditambah: " << stack[top] << endl;
}
void pop()
{
	cout << "Karakter dihapus: " << stack[top] << endl;
	--top;
}
void display()
{
	cout << "Karakter-karakter di stack:\n";
	for (int i = 0; i <= top; ++i) {
		cout << stack[i] << " ";
	}
	cout << endl;
}

int main()
{
	string kata;
	cout << "Masukkan sebuah kata: ";
	cin >> kata;

	for (int i = 0; i < size(kata); ++i) {
		push(kata[i]);
	}
	display();

	pop();
	pop();
	push('i');
	display();

	return 0;
}
