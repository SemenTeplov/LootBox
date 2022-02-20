#include "App.hpp"

void App::run() {
	Menu *menu = new Menu;
	Message *message = new Message;

	message->greeting();

	do {
		Chose = ' ';

		if (rChose == 1) {
			Box* object = new Box;

			menu->coins(count);
			object->visualClose();
			menu->bottomMenu();

			std::cin >> Chose;

			if (Chose == 'r') {
				menu->coins(count);
				object->visualOpen();
				menu->bottomMenu();

				rChose = object->getThing();
			}
		}
		else if (rChose == 2) {
			Bag* object = new Bag;

			menu->coins(count);
			object->visualClose();
			menu->bottomMenu();

			std::cin >> Chose;

			if (Chose == 'r') {
				menu->coins(count);
				object->visualOpen();
				menu->bottomMenu();

				rChose = object->getThing();
			}
		}
		else if (rChose == 3) {
			Chest* object = new Chest;

			menu->coins(count);
			object->visualClose();
			menu->bottomMenu();

			std::cin >> Chose;

			if (Chose == 'r') {
				menu->coins(count);
				object->visualOpen();
				menu->bottomMenu();

				rChose = object->getThing();
			}
		}
		else if (rChose == 4) {
			Coin* object = new Coin;

			menu->coins(count);
			object->visualFront();
			menu->bottomMenu();

			std::cin >> Chose;

			if (Chose == 'r') {
				rChose = 1;
				count++;
			}
		}
		else if (rChose == 5) {
			Empty* object = new Empty;

			menu->coins(count);
			object->visualEmpty();
			menu->bottomMenu();

			std::cin >> Chose;

			if (Chose == 'r') {
				rChose = 1;
				count--;
			}
		}

	} while (Chose != 'q');

	message->farewell();
};