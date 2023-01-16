// ATM-ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <ctime> 
#include <cstdlib> 
#include <algorithm>
#include <format>
#include <random>

#include <Windows.h>
#include <iomanip>
//#include <conio.h>

using namespace std;

std::vector <std::string> UserdataGenerator()
{
    std::vector <std::string> CustomerOutputInfo;
    std::vector <std::string> nameFirst;
    std::vector <std::string> nameLast;
    std::vector <float> currentBalence;
    std::vector <std::string> currentBalenceString;



    //list of names we use to generate account names
    std::vector <std::string>nameRando;

    std::ifstream fs("nameList");
    if (fs.is_open())
    {
        // variable used to extract strings one by one.
        std::string extractor;

        // extract a string from the input, skipping whitespace
        //  including newlines, tabs, form-feeds, etc. when this
        //  no longer works (eof or bad file, take your pick) the
        //  expression will return false
        while (fs >> extractor)
        {
            nameRando.push_back(extractor);
        }

        // close the file.
        fs.close();
    }
    auto rd = std::random_device{};
    auto rng = std::default_random_engine{ rd() };
    srand((unsigned int)time(NULL));

    for (int count = 0; count < nameRando.size(); ++count)
    {
        //grabs random bank account values useing random
        currentBalence.push_back((rand() % (5000000 + 1 - 0)) / 100);
        currentBalenceString.push_back(std::format("{:.2f}", currentBalence.at(count)));
        //grabs the first and lastname at random 
        std::shuffle(nameRando.begin(), nameRando.end(), rng);
        nameFirst.push_back(nameRando.at(count));
        //srand(unsigned(time(NULL)));
        std::shuffle(nameRando.begin(), nameRando.end(), rng);
        nameLast.push_back(nameRando.at(count));

        //Combinding first and last name for customer output 
        CustomerOutputInfo.push_back(nameFirst.at(count).append(" ").append(nameLast.at(count)).append("                                                       ").append("$").append(currentBalenceString.at(count)));

    }




    return CustomerOutputInfo;

}

void DisplayAccountInfoOneLine(std::vector <std::string> &CustomerOutputInfo, int index)
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



    std::vector <std::string> CustomerInfo;//what we pass from userdataGenerator to displayAccountInfo and other functions
    
    cout << "===================================================================================" << endl;
    cout << "Loading..." << endl;
    cout << "===================================================================================" << endl;
    CustomerInfo = UserdataGenerator();
    system("cls");


    cout << "Welcome To The Bank" << endl;
    cout << "===================================================================================" << endl;
    cout << "Press 1 To Login" << endl;
    cout << "===================================================================================" << endl;




    int x;
    int accountNum;
    cin >> x;

    if (x != 1)
    {
        cout << "Invalid Selection" << endl;
        return 5;
    }

    system("cls");


    cout << "===================================================================================" << endl;
    cout << "Please Enter Your Account Number" << endl;
    cout << "===================================================================================" << endl;
    cin >> accountNum;
    system("cls");

    cout << "NAME=============================================================AMOUNT============" << endl;
    cout << std::setfill('=') << endl;
    DisplayAccountInfoOneLine(CustomerInfo, accountNum); //prints account info at specified index (account balances are strings)
    cout << "\n\n\n" << endl;

    cout << "===================================================================================" << endl;
    cout << "Press 2 To Withdraw" << endl;
    cout << "===================================================================================" << endl;
}
