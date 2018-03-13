/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab9_stl_containers
** Date: 03/12/2018
** Description: Implementation for Buffer functions.
****************************************************/
#include "Buffer.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::queue;

/****************************************************
** Description: Starts the buffer simulation by
** collecting the info from the user.
****************************************************/

void startSimulation() {
    // Seed rand
    srand(time(NULL));

    // Create a variable for the average
    double avg = 0;

    // Get setup information from the user
    int rounds = getIntegerWithMin("How many rounds would you like to run the simulation for?", 1);
    int addItemChance = getIntegerWithMinMax("What percentage chance do you want to add a randomly generated number to the end of the buffer?", 1, 100);
    int removeItemChance = getIntegerWithMinMax("What percentage chance do you want to remove the number at the front of the buffer?", 1, 100);

    // Create a queue
    queue<int> *buffer = new queue<int>;

    // Start the simulation
    int currentRound = 0;
    do {
        // Print the buffer
        cout << endl;
        cout << "---------------ROUND " << currentRound << "---------------" << endl << endl;
        // Generate a random number between 1 and 1000
        int n = rand() % 1000 + 1;
        // Do we need to append a number?
        int addNum = rand() % 100 + 1;
        if (addNum <= addItemChance) {
            // Add the number to the queue
            buffer->push(n);
            cout << "Added " << n << " to the back of the queue" << endl;
        }
        // Do we need to remove a number?
        int removeNum = rand() % 100 + 1;
        if (removeNum <= removeItemChance) {
            // Remove the front number from the queue
            if (!buffer->empty()) {
                // Only pop the first element if the buffer isn't empty
                cout << "Removing " << buffer->front() << " from the front of the queue" << endl;
                buffer->pop();
            }
        }

        // Output the buffer
        printBuffer(buffer);

        // Print the length and average length of the buffer
        cout << "Current buffer length: " << buffer->size() << endl;

        // Calculate average buffer length
        if (currentRound > 0) {
            avg = (avg * (currentRound - 1) + buffer->size()) / currentRound;
        }
        cout << "Average buffer length: " << avg << endl;

        // Update the round
        currentRound++;

    } while (currentRound < rounds);

    // Delete the buffer
    delete buffer;
}

/****************************************************
** Description: Prints the buffer.
****************************************************/

void printBuffer(std::queue<int> *q) {
    for (int i = 0; i < q->size(); i++) {
        cout << "Buffer item " << i << ": " << q->front() << endl;
        // Put this item at the back of the queue and pop it from the front
        q->push(q->front());
        q->pop();
    }
}