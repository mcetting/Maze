#include "stdafx.h"
#include "MazeGenerator.h"
#include "iostream"
using namespace std;
//widthxheight
MazeGenerator::MazeGenerator()
{
	cout << "this initializes" << endl;
	//default all in map to 0

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			map[i][j] = 0;
		}
	}
}


MazeGenerator::~MazeGenerator()
{
}

void MazeGenerator::generate() {
	cout << "generating..." << endl;
}
void MazeGenerator::printMaze() {
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			cout << map[i][j]<<" ";
			if (j == height - 1) {
				cout << endl;
			}
			
		}
	}
}