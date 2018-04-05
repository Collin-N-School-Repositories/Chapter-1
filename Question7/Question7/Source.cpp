#include <iostream>
#include <string>
int main(){
	double Dollars = 1.00;
	double Pounds = 0.6318;
	double Pesos = 12.8863;
	double Yen = 82.34;
	double startingamount;
	double convertedamount;
	std::string currency;
	std::cout << "please input amount in usd >> " << std::endl;
	std::cin >> startingamount;
	std::cout << "please input currency being converted to >>" << std::endl;
	std::cin >> currency;
	if (currency == "pounds"){
		convertedamount = startingamount * Pounds;
	}
	if (currency == "pesos"){
		convertedamount = startingamount * Pesos;
	}
	if (currency == "yen"){
		convertedamount = startingamount * Yen;
	}
	std::cout << "your new total amount of " << currency << " is " << convertedamount << std::endl;
	system("pause");
	return 0;
}