#include <iostream>
#include <string>

int main(){
	double tacos = 0.99;
	double burritos = 1.99;
	double enchiladas = 2.99;
	double tostadas = 1.50;
	double water = 9.99;
	double lemonade = 2.22;
	double supremeBurrito = 4.50;
	double potato0llas = 1.99;
	double salt = 0.00;
	double totalCost;
	double amountpurchased;
	bool morefood;
	std::string yesno;
	std::string order;
	std::cout << "$$$$$$$$$$$$$$$$$$$Welcome to Delgados Tacos$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "_______________________________________________________________" << std::endl;
	std::cout << "|                                                              |" << std::endl;
	std::cout << "|                                                              |_____________" << std::endl;
	std::cout << "|                        ___________________________           |             |" << std::endl;
	std::cout << "|                       |                           |          | __________  |" << std::endl;
	std::cout << "|                       |                           |          ||          | |" << std::endl;
	std::cout << "|                       |                           |          ||          | |" << std::endl;
	std::cout << "|                       |                           |          ||          | |" << std::endl;
	std::cout << "|                       |                           |          ||__________| |" << std::endl;
	std::cout << "|                       |___________________________|          |             |" << std::endl;
	std::cout << "|                                                              |             |" << std::endl;
	std::cout << "|       ___                                                    |      ___    |" << std::endl;
	std::cout << "|      /   \                                                   |     /   \   |" << std::endl;
	std::cout << "|_____|     |__________________________________________________|____|     |__|" << std::endl;
	std::cout << "       \___/                                                         \___/    " << std::endl;

	std::cout << "What would you like to order, Here is a Menu" << std::endl;
	std::cout << "tacos are 0.99 " << std::endl;
	std::cout << "burritos  1.99" << std::endl;
	std::cout << "enchiladas  2.99" << std::endl;
	std::cout << "tostadas  1.50" << std::endl;
	std::cout << "water  9.99" << std::endl;
	std::cout << "lemonade  2.22" << std::endl;
	std::cout << "supremeBurrito  4.50" << std::endl;
	std::cout << "potato0llas  1.99" << std::endl;
	std::cout << "salt FREE" << std::endl;
	while (morefood == true)
	{
		std::cout << "Please enter what you would like to order" << std::endl;
		std::cin >> order;
		std::cout << "Please enter how many you would like" << std::endl;
		std::cin >> amountpurchased;
		if (order == "tacos"){
			totalCost += amountpurchased * tacos;
		}
		if (order == "burritos"){
			totalCost += amountpurchased * burritos;
		}
		if (order == "enchiladas"){
			totalCost += amountpurchased * enchiladas;
		}
		if (order == "tostadas"){
			totalCost += amountpurchased * tostadas;
		}
		if (order == "water"){
			totalCost += amountpurchased * water;
		}
		if (order == "lemonade"){
			totalCost += amountpurchased * lemonade;
		}
		if (order == "supremeBurrito"){
			totalCost += amountpurchased * supremeBurrito;
		}
		if (order == "potato0llas"){
			totalCost += amountpurchased * potato0llas;
		}
		if (order == "salt"){
			totalCost += amountpurchased * salt;
		}
		std::cout << "would you like to order anything else yes or no" << std::endl;
		std::cin >> yesno;
		if (yesno == "no")
		{
			morefood = false;

		}
		else {
			morefood = true;
		}

	}
	std::cout << "your total is " << totalCost << "enjoy your food and have a nice day!!" << std::endl;
	system("pause");
	return 0;
}