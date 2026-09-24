#include <iostream>
using namespace std;

#define MAX 6 // slot sebanyak 6
int queue[MAX];
int front = -1, rear = -1;

// TODO : Enqueue
void enqueue(int value)
{
	if (rear >= MAX - 1) {
		cout << "Queue penuh!\n";
		return;
	}

	if (front < 0)
		front = 0;
	++rear;
	queue[rear] = value;
	cout << value << " masuk ke dalam queue.\n";
}
void dequeue()
{
	if (front < 0 || front > rear) {
		cout << "Queue kosong!\n";
		return;
	}

	cout << queue[front] << " keluar dari queue.\n";
	++front;
}
// TODO : Nampilin isi queue
void display()
{
	if (front < 0 || front > rear) {
		cout << "Queue kosong!\n";
		return;
	}

	cout << "Isi queue: ";
	for (int i = front; i <= rear; ++i)
		cout << queue[i] << " ";
	cout << endl;
}

int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);

	display();

	enqueue(6);
	display();

	dequeue();
	display();

	return 0;
}
