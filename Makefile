output: main.o Menu.o InputValidation.o Buffer.o Palindrome.o
	g++ -std=c++0x -g -Wall -pedantic-errors main.o Menu.o InputValidation.o Buffer.o Palindrome.o -o lab9

main.o: main.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c main.cpp

Menu.o: Menu.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c Menu.cpp

InputValidation.o: InputValidation.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c InputValidation.cpp

Buffer.o: Buffer.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c Buffer.cpp

Palindrome.o: Palindrome.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c Palindrome.cpp

clean:
	rm *.o lab9