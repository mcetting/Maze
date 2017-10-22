// Maze.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "MazeGenerator.h"

using namespace std;
//include to .h file for includes

int main()
{
	//create a maze generator object
	MazeGenerator mg;
	//loop
	bool running = true;
	string input;
	while (running) {
		cout << "What do you want to do? (type 'help' for commands)" << endl;
		cin >> input;
		if (input == "help") {
			cout << "0) Type 'quit' to quit the application." << endl;
			cout << "1) Type 'clear' to clear the screen." << endl;
			cout << "2) Type 'print' to print the current maze." << endl;
			cout << "3) Type 'generate' to generate a maze." << endl;
		}
		else if (input == "clear") {
			system("CLS");
		}
		else if(input=="print"){
			mg.printMaze();
		}
		else if (input == "quit") {
			running = false;
		}
		else if (input == "generate") {
			mg.generate();
		}
	}
    return 0;
}

