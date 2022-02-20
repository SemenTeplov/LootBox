#include "Bag.hpp"

int Bag::getThing() {
	if (_choise <= 30 - _color) {
		return box;
	}
	else if ((_choise > 30 - _color) && (_choise <= 55 - _color)) {
		return bag;
	}
	else if ((_choise > 55 - _color) && (_choise <= 65 - _color)) {
		return chest;
	}
	else if ((_choise > 65 - _color) && (_choise <= 80 + _color)) {
		return coin;
	}
	else if ((_choise > 80 + _color) && (_choise <= 100)) {
		return empty;
	}
};

void Bag::visualClose() {
	color->getColor(_color);
	std::cout << "\t\t\t\t\t\t      ----      \n";
	std::cout << "\t\t\t\t\t\t     |    |     \n";
	std::cout << "\t\t\t\t\t\t----------------\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t----------------\n";
	color->reset();
};

void Bag::visualOpen() {
	color->getColor(_color);
	std::cout << "\t\t\t\t\t\t                \n";
	std::cout << "\t\t\t\t\t\t                \n";
	std::cout << "\t\t\t\t\t\t----------------\n";
	std::cout << "\t\t\t\t\t\t|    |    |    |\n";
	std::cout << "\t\t\t\t\t\t|     ----     |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t----------------\n";
	color->reset();
};