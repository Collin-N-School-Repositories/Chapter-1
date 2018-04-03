using namespace std;
#include <iostream>
#include <string>
#include <cmath>
int main(){
	double userinput1;
	double userinput2;
	double result;
	std::string operation;
	std::string yesno;
	bool more = true;
	std::cout << "welcome to a calculator please input what operation you are useing >>>>>" << std::endl;
	while (more == true)
	{
		std::cin >> operation;
		std::cout << "please input first number to be calculated >>>" << std::endl;
		std::cin >> userinput1;
		std::cout << "please input Second number to be calculated >>>" << std::endl;
		std::cin >> userinput2;
		if (operation == "addition"){
			result = userinput1 + userinput2;
		}
		if (operation == "subraction"){
			result = userinput1 - userinput2;
		}
		if (operation == "multiplucation"){
			result = userinput1 * userinput2;
		}
		if (operation == "division"){
			result = userinput1 / userinput2;
		}
		if (operation == "modulus"){
			result = std::fmod(userinput1,userinput2);
		}

		std::cout << "your result is " << result << std::endl;
		std::cout << "would you like to make another calculation input yes or no >>>" << std::endl;
			std::cin >> yesno;
			if (yesno == "yes"){
				more = true;
			}
			if (yesno == "no"){
				more = false;
			}
	}
	system("pause");
	return 0;
}