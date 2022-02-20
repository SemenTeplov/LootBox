#include "Ñontainer.hpp"

#ifndef __BAG__
#define __BAG__

class Bag : Container {
public:
	~Bag() { delete color; };

	int getThing();
	void visualClose();
	void visualOpen();

	Color* color = new Color;

private:
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

#endif // __BAG__
