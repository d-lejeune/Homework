#include <iostream>
int main()
{


	// CONDITIONAL STATEMENTS #2	


		int first; 
		int second;
	
		std::cout << "What is the first number?" << std::endl;


	std::cin >> first;

		std::cout << "What is the second number?";

		std::cin >> second;

	if (first > second)
	{

		std::cout << "The first number is bigger.";
		std::cin.get();
		};
		if (first < second)
		{

	std::cout << " The Second number is bigger.";
	std::cin.get();
	};
	if (first == second)
	{

		std::cout << "The numbers are equal";
		std::cin.get();
	};
	std::cin.get();
		return 0;
}