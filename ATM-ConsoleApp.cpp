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

using namespace std;

auto UserdataGenerator(std::vector <std::string> CustomerOutputInfo)
{
 
    std::vector <std::string> nameFirst;
    std::vector <std::string> nameLast;
    std::vector <float> currentBalence;
    std::vector <std::string> currentBalenceString;
    
 

    //list of names we use to generate account names
    std::vector <std::string>nameRando;

   nameRando.push_back("Jerry");
   nameRando.push_back("Bob");
   nameRando.push_back("Smith");
   nameRando.push_back("Kyle");
   nameRando.push_back("Mr Beast");
   nameRando.push_back("Amongus");
   nameRando.push_back("Terry");
   nameRando.push_back("Brent");
   nameRando.push_back("Katey");
   nameRando.push_back("Bron");
   nameRando.push_back("Kent");
   nameRando.push_back("Klark");
   nameRando.push_back("Ben");
   nameRando.push_back("Smithy");
   nameRando.push_back("Rob");
   nameRando.push_back("Bobby");
   nameRando.push_back("Hank");
   nameRando.push_back("Stacy");
   nameRando.push_back("Sharen");
   nameRando.push_back("Shannon");
   nameRando.push_back("BigBooty");
   nameRando.push_back("Ellie");
   nameRando.push_back("Ethan");
   nameRando.push_back("Roberts");

    //used to seed so we can have random account balances 
    srand(time(NULL));  
    double random;




    
    //grabs random bank account values useing random
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (int count = 0; count < 100; ++count)
    {
       currentBalence.push_back((rand() % (5000000+ 1 - 0))/100);
       currentBalenceString.push_back(to_string(currentBalence.at(count)));
    }
  
    
    

  

    //grabs the first and lastname at random 
    int FirstAndLastNameSize =nameRando.size();

    for (int count = 0; count < FirstAndLastNameSize; ++count)
    {
        nameFirst.push_back(nameRando.at(count));
        nameLast.push_back(nameRando.at(count));
        

    }

    srand(unsigned(time(NULL)));
    std::random_shuffle(nameFirst.begin(), nameFirst.end());


    //combines it all into a single string and push backs into CustomerOutputInfo
    for (int count = 0; count < FirstAndLastNameSize; ++count)
    {
        
        CustomerOutputInfo.push_back(nameFirst.at(count).append(" ").append(nameLast.at(count)).append("                                                       ").append("$").append(currentBalenceString.at(count)));

      
    }
    
    return CustomerOutputInfo;

}

auto DisplayAccountInfoOneLine(std::vector <std::string> CustomerOutputInfo, int index)
{
    int indexOfArray;
    std::cout << (CustomerOutputInfo.at(index));
}

int main()
{
    static CONSOLE_FONT_INFOEX  fontex;
    fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetCurrentConsoleFontEx(hOut, 0, &fontex);
    fontex.FontWeight = 12200;
    fontex.dwFontSize.X = 36;
    fontex.dwFontSize.Y = 36;
    system("color 87");
    SetCurrentConsoleFontEx(hOut, NULL, &fontex);



    std::vector <std::string> CustomerOutputInfo;//what we pass from userdataGenerator to displayAccountInfo and other functions



    cout << "Welcome To The Bank" << endl;
    cout << "===================================================================================" << endl;
    cout << "Press 1 To Login" << endl;
    cout << "===================================================================================" << endl;




    int x;
    int accountNum;
    cin >> x;

    if (x == 1)
    {
        UserdataGenerator(CustomerOutputInfo); //creates dummy data
        

    }

    else
    {
        cout << "Invalid Selection" << endl;
    }

    system("cls");


    cout << "===================================================================================" << endl;
    cout << "Please Enter Your Account Number" << endl;
    cout << "===================================================================================" << endl;
    
    cin >> accountNum;
    system("cls");
    
    cout << "NAME=============================================================AMOUNT============" << endl;
    cout << std::setfill('=') << endl;
    DisplayAccountInfoOneLine(UserdataGenerator(CustomerOutputInfo), accountNum); //prints account info at specified index (account balances are strings)
    cout << "\n \n \n" << endl;

    cout << "===================================================================================" << endl;
    cout << "Press 2 To Withdraw" << endl;
    cout << "===================================================================================" << endl;
}
