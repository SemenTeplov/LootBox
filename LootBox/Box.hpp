#include <iostream>

#include "Ñontainer.hpp"

#ifndef __BOX__
#define __BOX__

class Box : Container {
public:
	Box() {};
	~Box() {};

	int getThing();
	void visualClose();
	void visualOpen();

private:
	Color *color = new Color;

	int _choise = randChoes();
	int _color = randColor();

	enum things {
		box = 1,
		bag = 2,
		chest = 3,
		coin = 4,
		empty = 5
	};
};

#endif // __BOX__
