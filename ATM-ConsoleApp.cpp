// ATM-ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//USES C20

#include <iostream>
#include <string>
#include <vector>
#include <ctime> 
#include <cstdlib> 
#include <algorithm>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include <random>

int numberOFRowsToGenerate = 250; //we use this to cap how many fake accounts we generate


struct accountData
{
	std::string userFirstName;
	std::string userLastName;
	std::string gender;
	std::string age;
	std::string occupation;
	std::string lastAccessed;
	int phoneNumber;
	float accountBalence;
	int accountPassCode;
};



auto GenerateUserData()
{
	//NAME LIST (FIRST NAMES)
	std::vector<std::string> namesInListFirst;

	namesInListFirst.push_back("Genny");
	namesInListFirst.push_back("Bob");
	namesInListFirst.push_back("Mr Beast");
	namesInListFirst.push_back("Brent");
	namesInListFirst.push_back("Bobby");
	namesInListFirst.push_back("Sadie");
	namesInListFirst.push_back("Roberts");
	namesInListFirst.push_back("Dylan");
	namesInListFirst.push_back("James");
	namesInListFirst.push_back("Quin");
	namesInListFirst.push_back("Rachel");
	namesInListFirst.push_back("Amongus");
	namesInListFirst.push_back("Lisa");
	namesInListFirst.push_back("Homer");
	namesInListFirst.push_back("Jenny");
	namesInListFirst.push_back("John");
	namesInListFirst.push_back("Hank");
	namesInListFirst.push_back("Hill");
	namesInListFirst.push_back("Samantha");
	namesInListFirst.push_back("Andrew");
	namesInListFirst.push_back("Waltah");

	//NAME LIST (LAST NAMES)
	std::vector<std::string> namesInListLast;

	namesInListLast.push_back("Genny");
	namesInListLast.push_back("Bob");
	namesInListLast.push_back("Mr Beast");
	namesInListLast.push_back("Brent");
	namesInListLast.push_back("Bobby");
	namesInListLast.push_back("Sadie");
	namesInListLast.push_back("Roberts");
	namesInListLast.push_back("Dylan");
	namesInListLast.push_back("James");
	namesInListLast.push_back("Quin");
	namesInListLast.push_back("Iffle");
	namesInListLast.push_back("Matheson");
	namesInListLast.push_back("Lisa");
	namesInListLast.push_back("Homer");
	namesInListLast.push_back("Jenny");
	namesInListLast.push_back("John");
	namesInListLast.push_back("Hank");
	namesInListLast.push_back("Hill");
	namesInListLast.push_back("Samantha");
	namesInListLast.push_back("Andrew");
	namesInListLast.push_back("Waltah");
	namesInListLast.push_back("White");

	//GENDER LIST
	std::vector<std::string> gendersInList;
	gendersInList.push_back("Male");
	gendersInList.push_back("Female");
	gendersInList.push_back("Cisgender");
	gendersInList.push_back("Transgender");
	gendersInList.push_back("Cishet"); 
	gendersInList.push_back("Non - binary");
	gendersInList.push_back("Intersex");
	gendersInList.push_back("Genderqueer");
	gendersInList.push_back("Gender-fluid");
	gendersInList.push_back("Gender Non-conforming");
	gendersInList.push_back("Gender-Expansive");
	gendersInList.push_back("Agender");
	gendersInList.push_back("Gendervoid");
	gendersInList.push_back("Bigender");
	gendersInList.push_back("Omnigender");
	gendersInList.push_back("Two-spirit");
	gendersInList.push_back("Pangender");


	//OCCUPATION LIST
	std::vector<std::string> occupationsInList;
	occupationsInList.push_back("Yard Hand");
	occupationsInList.push_back("Retail Worker");
	occupationsInList.push_back("Pizza Flipper");
	occupationsInList.push_back("Fry Cook");
	occupationsInList.push_back("CEO");
	occupationsInList.push_back("I.T");
	occupationsInList.push_back("Warehouse");
	occupationsInList.push_back("Sexy Dancer");
	occupationsInList.push_back("Talent Delivery Specialist");
	occupationsInList.push_back("Snake Milker");
	occupationsInList.push_back("Chick Sexer");
	occupationsInList.push_back("Lab Rat");
	occupationsInList.push_back("Media Distribution Officer");
	occupationsInList.push_back("Animal Colourist");
	occupationsInList.push_back("Hair Boiler");
	occupationsInList.push_back("Digital Overlord");
	occupationsInList.push_back("Reindeer Walker");
	occupationsInList.push_back("Retail Jedi");
	occupationsInList.push_back("Slaughterer");
	occupationsInList.push_back("Wizard of Light Bulb Moments");
	occupationsInList.push_back("Direct Mail Demi-God");
	occupationsInList.push_back("Wet Leisure Attendant");
	occupationsInList.push_back("Grand Master of Underlings");
	occupationsInList.push_back("Twisted Brother");
	occupationsInList.push_back("Under Secretary to the Sub-Committee");
	occupationsInList.push_back("Ghost Hunter");
	occupationsInList.push_back("Zombie");
	occupationsInList.push_back("Teddy Bear Surgeon ");

	//GENERATE PHONE NUMBERS BEGIN==================================================================================================
	std::vector<int> accountBalence;
	srand((unsigned int)time(NULL));

	for (int count = 0; count <= numberOFRowsToGenerate; ++count)
	{
		accountBalence.push_back(int(rand() % 49999999 + 49300000));
	};

	//GENERATE PHONE NUMBERS END====================================================================================================






	//GENERATE ACCOUNT BALANCE BEGIN==================================================================================================
	std::vector<int> PhoneNumbersInList;
	srand((unsigned int)time(NULL));

	for (int count = 0; count <= numberOFRowsToGenerate; ++count)
	{
		PhoneNumbersInList.push_back(int(rand() % 20000 + 100000)/100);
	};

	//GENERATE ACCOUNT BALANCE END====================================================================================================






	//GENERATE PASSCODE BEGIN==================================================================================================
	std::vector<int> accountPassCode;
	srand((unsigned int)time(NULL));

	for (int count = 0; count <= numberOFRowsToGenerate; ++count)
	{
		accountPassCode.push_back(int(rand() % 10000 + 500));
	};

	//GENERATE PASSCODE END====================================================================================================





	std::vector <accountData> collectionUserData;


	//SHUFFLE FIRST NAME AND LAST NAME BEGIN========================================================================================


	auto rd = std::random_device{};
	auto rng = std::default_random_engine{ rd() };

	//SHUFFLE FIRST NAME AND LAST NAME END==========================================================================================


	//ADD TO STRUCT BEGIN===========================================================================================================
	for (int count = 0; count <= numberOFRowsToGenerate; ++count)
	{

		std::shuffle(namesInListFirst.begin(), namesInListFirst.end(), rng);
		std::shuffle(namesInListLast.begin(), namesInListLast.end(), rng);
		std::shuffle(PhoneNumbersInList.begin(), PhoneNumbersInList.end(), rng);
		std::shuffle(accountBalence.begin(), accountBalence.end(), rng);
		std::shuffle(accountPassCode.begin(), accountPassCode.end(), rng);

	 accountData temp
		{
			namesInListFirst.at(0),
			namesInListLast.at(0),
			"",
			"",
			"",
			"",
			accountBalence.at(0),
			PhoneNumbersInList.at(0),
			accountPassCode.at(0)

		};
	 collectionUserData.push_back(temp);

	 std::cout << collectionUserData.at(count).userFirstName << "   " 
		 << collectionUserData.at(count).userLastName 
		 << "    " 
		 << collectionUserData.at(count).phoneNumber
		 << "    "
		 << collectionUserData.at(count).accountBalence 
		 << "    "
		 << collectionUserData.at(count).accountPassCode
		 << std::endl;
	};
	//ADD TO STRUCT END=============================================================================================================

	return 0;
	


};


int main()
{
	
	GenerateUserData();
}
