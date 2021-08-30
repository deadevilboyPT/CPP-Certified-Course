// Section4.Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// SECTION CHALLENGE

#include <iostream>

int main()
{
    int favoriteNr(0);
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favoriteNr;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favoriteNr << " is my favorite number!" << std::endl;
}
