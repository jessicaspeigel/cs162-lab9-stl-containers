/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab9_stl_containers
** Date: 03/12/2018
** Description: Header for Buffer functions.
****************************************************/
#ifndef CS162_LAB9_STL_CONTAINERS_BUFFER_HPP
#define CS162_LAB9_STL_CONTAINERS_BUFFER_HPP

#include <queue>
#include "InputValidation.hpp"

void startSimulation();

void printBuffer(std::queue<int> *q);

double getAverageBufferLength(std::queue<int> *q);

#endif //CS162_LAB9_STL_CONTAINERS_BUFFER_HPP
