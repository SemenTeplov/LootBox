#include "Chest.hpp"

int Chest::getThing() {
	if (_choise <= 20 - _color) {
		return box;
	}
	else if ((_choise > 20 - _color) && (_choise <= 45 - _color)) {
		return bag;
	}
	else if ((_choise > 45 - _color) && (_choise <= 65 - _color)) {
		return chest;
	}
	else if ((_choise > 65 - _color) && (_choise <= 90 + _color)) {
		return coin;
	}
	else if ((_choise > 90 + _color) && (_choise <= 100)) {
		return empty;
	}
};

void Chest::visualClose() {
	color->getColor(_color);
	std::cout << "\t\t\t\t\t\t  ------------  \n";
	std::cout << "\t\t\t\t\t\t/             \\\n";
	std::cout << "\t\t\t\t\t\t----------------\n";
	std::cout << "\t\t\t\t\t\t|      ||      |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t----------------\n";
	color->reset();
};

void Chest::visualOpen() {
	color->getColor(_color);
	std::cout << "\t\t\t\t\t\t                \n";
	std::cout << "\t\t\t\t\t\t                \n";
	std::cout << "\t\t\t\t\t\t----------------\n";
	std::cout << "\t\t\t\t\t\t|      ||      |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t|              |\n";
	std::cout << "\t\t\t\t\t\t----------------\n";
	color->reset();
};