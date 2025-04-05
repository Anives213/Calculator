#include <iostream>

int main() {

	char Operator;
	double First;
	double Second;

	std::cout << "Calculator" << "\n";
	std::cout << "**********" << "\n";


	std::cout << "Please enter the first number: " << "\n";
	std::cin >> First;
	std::cout << First << "\n";
	std::cout << "Please enter the second number: " << "\n";
	std::cin >> Second;
	std::cout << Second << "\n";


	std::cout << "Please select an operator: " << "\n";
	std::cin >> Operator;
	std::cout << Operator  << "\n";

	switch (Operator) {

	case '+':
		std::cout << "The answer is: " << First + Second;
		break;
	case '-':
		std::cout << "The answer is: " << First - Second;
		break;
	case '/':
		std::cout << "The answer is: " << First / Second;
		break;
	case '*':
		std::cout << "The answer is: " << First * Second;
		break;
	default:
		std::cout << "That was not an operator. Please try again.";


	}

 return 0;

}
