#include "Box.hpp"
#include "Bag.hpp"
#include "Chest.hpp"
#include "Coin.hpp"
#include "Empty.hpp"

#ifndef __INTERFACE__
#define __INTERFACE__

class Message {
public:
	void greeting() {
		spaceHalfScreen();
		std::cout << "\t\t\t\t\t\t\tHello\n";
		spaceHalfScreen();
	};

	void farewell() {
		spaceHalfScreen();
		std::cout << "\t\t\t\t\t\t\tGoodBye\n";
		spaceHalfScreen();
	};

	void bankruptcy() {
		spaceHalfScreen();
		std::cout << "\t\t\t\t\tSorry, You were out of coins.\n";
		spaceHalfScreen();
	};

private:
	void spaceHalfScreen() {
		for (int i = 0; i < 15; i++) {
			for (int i = 0; i < 115; i++) {
				std::cout << " ";
			}
			std::cout << std::endl;
		};
	};
};

class Menu {
public:
	void coins(int count) {
		std::cout << "\n\t\t\t\t\t\t\tCoins: " << count << std::endl;
		space();
	};

	void bottomMenu() {
		space();
		std::cout << "| Qute - q |";
		for (int i = 0; i < 97; i++) std::cout << " ";
		std::cout << "| Run - r |";
	};

	void space() {
		for (int i = 0; i < 9; i++) {
			for (int i = 0; i < 115; i++) {
				std::cout << " ";
			}
			std::cout << std::endl;
		};
	};
};

#endif // __INTERFACE__
