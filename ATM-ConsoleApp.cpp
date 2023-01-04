// ATM-ConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <ctime> 
#include <cstdlib> 
#include <algorithm>

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


    
    //Grabs random bank account values
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (int count = 0; count < 100; ++count)
    {
        
        CurrentBalence.push_back((rand() % (5000000+ 1 - 0))/100);
        
  
    }
  

    

  

    //Grabs the first and lastname at random
    int FirstAndLastNameSize = NameRando.size();

    for (int count = 0; count < FirstAndLastNameSize; ++count)
    {
        NameFirst.push_back(NameRando.at(count));
        NameLast.push_back(NameRando.at(count));
        

    }

    srand(unsigned(time(NULL)));
    std::random_shuffle(NameFirst.begin(), NameFirst.end());

    for (int count = 0; count < FirstAndLastNameSize; ++count)
    {
        std::cout << "\n" << NameFirst.at(count) << " " << NameLast.at(count) << " " << "$" << CurrentBalence.at(count);
       


    }
 
    return 0;

}


int main()
{
    userdata();
}
