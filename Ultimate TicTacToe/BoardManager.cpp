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
	std::string output = "\t\t";
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
			output += "\n\t\t";
		}
		if (row != 2)
		{
			output += "---------------\n\t\t";
		}
	}
	std::cout << output << std::endl;
}

std::vector<int> BoardManager::GetCurrentBigBoardCoord()
{
	return currentBigBoardCoord;
}

void BoardManager::CurrentBigBoardCoord(std::vector<int> newCoord)
{
	currentBigBoardCoord = newCoord;
}

bool BoardManager::HasBoardWon(std::vector<int> coord)
{
	return m_BoardArray[coord[0], coord[1]]->GetIsBoardWon();
}

void BoardManager::AddPlayerSelection(std::vector<int> selectBigGridCoord, std::vector<int> selectSmallGridCoord, char playerID)
{
	m_BoardArray[selectBigGridCoord[0]][selectBigGridCoord[1]]
		.AddPlayerSelection(selectSmallGridCoord, playerID);
}
