#pragma once
class MazeGenerator
{
private:
	//start with set values then make dynamic
	int height = 10;
	int width = 10;
	int map[10][10];

//sets everything after to public
public:
	//declare variables in the header file and and write the code in the .cpp file
	MazeGenerator();
	~MazeGenerator();
	void generate();
	void printMaze();
};

