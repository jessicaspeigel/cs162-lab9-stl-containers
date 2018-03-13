/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 Lab 9
** Date: 03/09/2018
** Description: Lab 8 main
****************************************************/

#include <iostream>
#include <string>
#include "Buffer.hpp"
#include "Menu.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
    // Welcome the user
    cout << "Welcome to Lab 9: Stack and Queue STL Containers" << endl << endl;
    // Get the main menu ready
    vector<string> mainMenuItems;
    mainMenuItems.push_back("Run a buffer simulation");
    mainMenuItems.push_back("Create a palindrome");
    mainMenuItems.push_back("Exit");
    Menu mainMenu("Choose from the following options", mainMenuItems);
    int menuChoice = 1;
    // Start the program
    do {
        // Show the menu and get a choice
        menuChoice = mainMenu.showMenu();
        switch (menuChoice) {
            case 1: // Run the buffer simulation
                startSimulation();
                break;
            case 2: // Create a palindrome
                //printHeadValue(list);
                break;

        }
    } while (menuChoice != 3); // Choosing 3 equals exit

    return 0;
}
