#include "Interface.hpp"

#ifndef __APP__
#define __APP__

class App {
public:
	void run();
private:
	int count{ 10 };
	int rChose{ 1 };
	char Chose{ ' ' };
};

#endif // __APP__