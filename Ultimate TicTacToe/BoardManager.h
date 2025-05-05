#pragma once
#include "Board.h"

class BoardManager
{
public:
	// Variables

	// Functions


	BoardManager();
	~BoardManager();

	void PrintBoard();
protected:
	// Variables

	// Functions
private:
	// Variables
	const int boardRows = 3;
	const int boardCols = 3;

	Board m_BoardArray[3][3];

	// Functions

};