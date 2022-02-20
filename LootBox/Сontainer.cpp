#include "Ñontainer.hpp"

Container::Container() {
	_choise = randChoes();
};

int Container::randChoes() {
	return rand() % 100 + 1;
};

int Container::randColor() {
	return rand() % 4 + 1;
};

int Container::getThing() {
	if (_choise <= 20) {
		return box;
	}
	else if ((_choise > 20) && (_choise <= 50)) {
		return bag;
	}
	else if ((_choise > 50) && (_choise <= 60)) {
		return chest;
	}
	else if ((_choise > 60) && (_choise <= 75)) {
		return coin;
	}
	else if ((_choise > 75) && (_choise <= 100)) {
		return empty;
	}
};