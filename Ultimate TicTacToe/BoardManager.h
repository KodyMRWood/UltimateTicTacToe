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

	std::vector<int> GetCurrentBigBoardCoord();

	void CurrentBigBoardCoord(std::vector<int> newCoord);

	bool HasBoardWon(std::vector<int> coord);

	void AddPlayerSelection(std::vector<int> selectBigGridCoord ,std::vector<int> selectSmallGridCoord, char playerID);

protected:
	// Variables

	// Functions
private:
	// Variables
	const int boardRows = 3;
	const int boardCols = 3;

	Board m_BoardArray[3][3];

	std::vector<int> currentBigBoardCoord;

	
	// Functions
	

};