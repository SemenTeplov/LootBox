#include "Coin.hpp"

void Coin::visualFront() {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, 0 | 6);
	std::cout << "\t\t\t\t\t\t       --       \n";
	std::cout << "\t\t\t\t\t\t   |         |  \n";
	std::cout << "\t\t\t\t\t\t |            | \n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t |            | \n";
	std::cout << "\t\t\t\t\t\t   |        |   \n";
	std::cout << "\t\t\t\t\t\t       --       \n";
	SetConsoleTextAttribute(hStdOut, 0 | 7);
};

void Coin::visualSide() {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, 0 | 6);
	std::cout << "\t\t\t\t\t\t       --       \n";
	std::cout << "\t\t\t\t\t\t      |  |      \n";
	std::cout << "\t\t\t\t\t\t      |  |      \n";
	std::cout << "\t\t\t\t\t\t      |  |      \n";
	std::cout << "\t\t\t\t\t\t      |  |      \n";
	std::cout << "\t\t\t\t\t\t      |  |      \n";
	std::cout << "\t\t\t\t\t\t       --       \n";
	SetConsoleTextAttribute(hStdOut, 0 | 7);
};