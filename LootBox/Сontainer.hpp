#include <iostream>

#include "Color.hpp"

#ifndef __CONTAINER__
#define __CONTAINER__

class Container {
public:
	Container();
	virtual ~Container() {};

	virtual int getThing();
	int randChoes();
	int randColor();

private:
	int _choise;

	enum things {
		box = 1,
	    bag = 2,
	    chest = 3,
	    coin = 4,
	    empty = 5
	};
};

#endif // __CONTAINER__
