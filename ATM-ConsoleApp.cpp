// ATM-ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <ctime> 
#include <cstdlib> 


int userdata()
{
    std::vector <std::string> NameFirst;
    std::vector <std::string> NameLast;
    std::vector <float> CurrentBalence;
 
    //SET USER DATA MANUALLY UNTIL WE SET UP CSV IMPORTS

    //RANDOM LIST OF NAMES
    std::vector <std::string> NameRando;

    NameRando.push_back("Jerry");
    NameRando.push_back("Bob");
    NameRando.push_back("Smith");
    NameRando.push_back("Kyle");
    NameRando.push_back("Mr Beast");
    NameRando.push_back("Amongus");
    NameRando.push_back("Terry");
    NameRando.push_back("Brent");
    NameRando.push_back("Katey");
    NameRando.push_back("Bron");
    NameRando.push_back("Kent");
    NameRando.push_back("Klark");
    NameRando.push_back("Ben");
    NameRando.push_back("Smithy");
    NameRando.push_back("Rob");
    NameRando.push_back("Bobby");
    NameRando.push_back("Hank");
    NameRando.push_back("Stacy");
    NameRando.push_back("Sharen");
    NameRando.push_back("Shannon");
    NameRando.push_back("BigBooty");
    NameRando.push_back("Ellie");
    NameRando.push_back("Ethan");
    NameRando.push_back("Roberts");

    //RANDOM LIST OF Bank Amounts
    srand(time(NULL));  
    double random;


    std::vector <float> AmountRando;


    

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    //std::cout << "\n" << AmountRando.size();
    for (int count = 0; count < 100; ++count)
    {
        
        CurrentBalence.push_back((rand() % (5000000+ 1 - 0)));
        std::cout << "\n" << CurrentBalence.at(count);
        // display 5 random numbers per row
    }
   
    /*
   // std::cout << "\n" << AmountRando.back();

    for (int i = 0; i < AmountRando.back(); ++i)
    {

        std::cout << "\n" << AmountRando.at(i);
    }

    /*
    //Mr John Smith (Used for testing)

    NameFirst.push_back("John");
    NameLast.push_back("Smith");
    CurrentBalence.push_back (512.23);
   

    //We loopn to print out each element

   // int DataBaseSize = NameFirst.max_size;

   // for (int i = 0; i <= DataBaseSize; i++) {
      //  std::cout << "\n \n Customer First Name: " << NameFirst[i] << "\n \n Customer Last Name: " << NameLast[i] << "\n \n Current Balence: " << "$" << CurrentBalence[i] << "\n \n \n \n \n \n \n";
   // }
          //std::cout << "\n \n Customer First Name: " << NameFirst[0] << "\n \n Customer Last Name: " << NameLast[0] << "\n \n Current Balence: " << "$" << CurrentBalence[0] << "\n \n \n \n \n \n \n";


*/
  

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
