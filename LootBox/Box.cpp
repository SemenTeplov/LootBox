#include "Box.hpp"

int Box::getThing() {
	if (_choise <= 40 - _color) {
		return box;
	}
	else if ((_choise > 40 - _color) && (_choise <= 55 - _color)) {
		return bag;
	}
	else if ((_choise > 55 - _color) && (_choise <= 60 - _color)) {
		return chest;
	}
	else if ((_choise > 60 - _color) && (_choise <= 75 + _color)) {
		return coin;
	}
	else if ((_choise > 75 + _color) && (_choise <= 100)) {
		return empty;
	}
};

void Box::visualClose() {
	color->getColor(_color);
	std::cout << "\t\t\t\t\t\t----------------\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t----------------\n";
	color->reset();
};

void Box::visualOpen() {
	color->getColor(_color);
	std::cout << "\t\t\t\t\t\t                \n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t----------------\n";
	color->reset();
};