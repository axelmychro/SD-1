#include <iostream>
using namespace std;

struct Node {
	int value;
	Node* next;
};
Node* head = NULL;
Node* tail = NULL;

// tambah di awal
void insertFirst(int value)
{
	Node* newNode = new Node;
	newNode->value = value;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
		tail = head;
	} else {
		newNode->next = head;
		head = newNode;
	}
}
// tambah di akhir
void insertLast(int value)
{
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
		tail = head;
	} else {
		tail->next = newNode;
		tail = newNode;
	}
}
// tambah setelah nilai tertentu
void insertAfter(int value, int check)
{
	Node* newNode = new Node;
	newNode->value = value;
	newNode->next = NULL;

	Node* p = head;
	while (p != NULL && p->value != check) {
		p = p->next;
	}
	if (p == NULL) {
		cout << "Node dengan nilai " << check << " tidak ditemukan."
		     << endl;
		delete newNode;
	} else {
		newNode->next = p->next;
		p->next = newNode;

		if (p == tail) {
			tail = newNode;
		}
	}
}
// hapus node pertama
void deleteFirst()
{
	if (head == NULL) {
		cout << "List Kosong!\n";
		return;
	}

	Node* temporary_node = head;

	head = head->next;
	if (head == NULL)
		tail = NULL;
	delete temporary_node;
}
// hapus node terakhir
void deleteLast()
{
	if (head == NULL) {
		cout << "List Kosong!\n";
		return;
	}
	if (head == tail) {
		delete head;
		head = tail = NULL;
		return;
	}

	Node* temporary_node = head;

	while (temporary_node->next != tail) {
		temporary_node = temporary_node->next;
	}

	delete tail;
	tail = temporary_node;
	tail->next = NULL;
}
// hapus node dengan nilai tertentu
void deleteMiddle(int value)
{
	if (head == NULL) {
		cout << "List Kosong!\n";
		return;
	}
	if (head->value == value) {
		deleteFirst();
		return;
	}

	Node* previous_node = head;

	while (previous_node->next != NULL &&
	       previous_node->next->value != value) {
		previous_node = previous_node->next;
	}

	if (previous_node->next == NULL) {
		cout << "Node dengan nilai " << value << " tdk ketemu\n";
	} else {
		Node* target_node = previous_node->next;
		previous_node->next = target_node->next;
		if (target_node == tail)
			tail = previous_node;
		delete target_node;
	}
}
// cetak linked list
void printList()
{
	cout << "= LINKED LIST =\n";
	Node* current_node = head;
	while (current_node != NULL) {
		cout << "[" << current_node->value << "] -> ";
		current_node = current_node->next;
	};
	cout << "NULL\n";
}

int main()
{
	int pilihan;
	do {
		system("clear");

		cout << "===== MENU SINGLE LINKED LIST =====\n";
		cout << "1. Tambah di awal\n";
		cout << "2. Tambah di akhir\n";
		cout << "3. Tambah setelah nilai tertentu\n";
		cout << "4. Hapus berdasarkan nilai\n";
		cout << "5. Tampilkan linked list\n";
		cout << "0. Keluar\n";

		cout << "  [?] Pilihan: ";
		cin >> pilihan;

		int value;
		switch (pilihan) {
		case 1:
			cout << "  [?] Tambah nilai di AWAL: ";
			cin >> value;
			insertFirst(value);
			break;
		case 2:
			cout << "  [?] Tambah nilai di AKHIR: ";
			cin >> value;
			insertLast(value);
			break;
		case 3:
			cout << "  [?] Tambah nilai: ";
			cin >> value;
			cout << "  [?] Setelah nilai: ";
			int check;
			cin >> check;
			insertAfter(value, check);
			break;
		case 4:
			cout << "  [?] HAPUS nilai: ";
			cin >> value;
			deleteMiddle(value);
			break;
		case 5:
			printList();
			break;
		};
		if (pilihan != 0) {
			cout << "\nTekan Enter untuk melanjutkan...";
			cin.ignore();
			cin.get();
		}

	} while (pilihan != 0);
	return 0;
}
