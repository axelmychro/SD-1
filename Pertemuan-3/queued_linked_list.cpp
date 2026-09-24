#include <iostream>
#include <queue>

int main()
{
	std::queue<int> q;
	int input;

	while (std::cin >> input) {
		q.push(input);
	}
	while (!q.empty()) {
		std::cout << q.front() << " ";
		q.pop();
	}

	return 0;
}
