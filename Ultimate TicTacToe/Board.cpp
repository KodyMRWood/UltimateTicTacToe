#include "Board.h"
#include <iostream>

/// <summary>
/// Board constructor
/// </summary>
Board::Board()
{
	// Populare the board slots with empty values
	for (int row = 0; row < boardRows; ++row)
	{
		for (int col = 0; col < boardCols; ++col)
		{
			boardSlots[row][col] = 'e';
		}
	}
}

/// <summary>
/// Board deconstructor
/// </summary>
Board::~Board()
{
	
}

char Board::GetSlotValue(int x, int y)
{
	return boardSlots[x][y];
}

void Board::AddPlayerSelection(std::vector<int> selectCoord, int playerID)
{
	return;
}
