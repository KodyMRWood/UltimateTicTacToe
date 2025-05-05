#include "BoardManager.h"
#include <iostream>


BoardManager::BoardManager()
{
	for (int row = 0; row < boardRows; ++row)
	{
		for (int col = 0; col < boardCols; ++col)
		{
			Board newBoard;
			m_BoardArray[row][col] = newBoard;
		}
	}
}

BoardManager::~BoardManager()
{
}

void BoardManager::PrintBoard()
{
	std::string output = "";
	for (int row = 0; row < boardRows; ++row)
	{
		for (int col = 0; col < boardCols; ++col)
		{
			for (int x = 0; x < 3; ++x)
			{
				for (int y = 0; y < 3; ++y)
				{
					char slotValue = m_BoardArray[row][x].GetSlotValue(col, y);
					char toAdd = (slotValue == 'e') ? ' ' : slotValue;
					output += toAdd;
				}

				if (x != 2)
				{
					output += " | ";
				}
			}
			output += "\n";
		}
		if (row != 2)
		{
			output += "---------------\n";
		}
	}
	std::cout << output << std::endl;
}