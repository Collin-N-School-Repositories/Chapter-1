#include<iostream>
#include<string>
int main(){
	std::string describe;
	std::string wordEst;
	std::string jobs;
	std::string object;
	std::string noun;
	std::string pluralNoun;
	int aFirstNumberChosenByUser;
	int bSecondNumberChosenByUser;
	int cTheResultOfaMinusB;
	std::cout << "Welcome to my Mad Libs. \n\n";
	std::cout << "Enter a description word>>>" << std::endl;
	std::cin >> describe;
	std::cout << "Enter a word ending in EST >>>" << std::endl;
	std::cin >> wordEst;
	std::cout << "Enter a job >>>" << std::endl;
	std::cin >> jobs;
	std::cout << "Enter a random  object >>>" << std::endl;
	std::cin >> object;
	std::cout << "Enter a noun >>>" << std::endl;
	std::cin >> noun;
	std::cout << "Enter a plural noun >>>" << std::endl;
	std::cin >> pluralNoun;
	std::cout << "Enter a number >>>" << std::endl;
	std::cin >> aFirstNumberChosenByUser;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> bSecondNumberChosenByUser;
	
	cTheResultOfaMinusB = aFirstNumberChosenByUser + bSecondNumberChosenByUser;
	std::cout << "That " << describe << " human is the " << wordEst << " human of all. he has " << cTheResultOfaMinusB << std::endl;
	std::cout << jobs << " This human has a " << noun << "  and some " << pluralNoun << " harass them every day  " << std::endl;
	std::cout << "A " << object << "is his their only friend" << std::endl;

	system("pause");
	return 0;
	


}