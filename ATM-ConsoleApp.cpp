// ATM-ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


int userdata()
{
    std::string NameFirst;
    std::string NameLast;
    double CurrentBalence; 
 
    //SET USER DATA MANUALLY UNTIL WE SET UP CSV IMPORTS


    NameFirst = "John";
    NameLast = "Smith";
    CurrentBalence = 512.23 ;
    int CurrencyRond = (int)(CurrentBalence + 0.5);

    std::cout << "\n \n Customer First Name: " << NameFirst << "\n \n Customer Last Name: " << NameLast << "\n \n Current Balence: " << "$" << CurrencyRond << "\n \n \n \n \n \n \n";

    return 0;

}


int main()
{
    userdata();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
