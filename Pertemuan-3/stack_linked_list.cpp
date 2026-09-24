#include <iostream>
#include <stack>

int main()
{
	std::stack<int> s;
	int input;

	while (std::cin >> input)
		s.push(input);
	while (!s.empty()) {
		std::cout << s.top() << " ";
		s.pop();
	};
	std::cout << std::endl;

	return 0;
}
