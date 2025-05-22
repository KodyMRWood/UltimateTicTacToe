#include "GameStateInGame.h"

GameStateInGame::GameStateInGame()
{
	// Stub
}

void GameStateInGame::OnStateBegin()
{
	//nextGameState = new GameStateEndGame();
	std::cout << "In Game" << std::endl;
}

void GameStateInGame::OnStateEnd()
{

}

bool GameStateInGame::UpdateState(std::string input, std::vector<Player>& players, int playerTurn, BoardManager& boardManager, BaseState*& currentState)
{
	if (!BaseState::UpdateState(input,players, playerTurn, boardManager, currentState))
	{
		return false;
	}

	std::cout << "---------- CURRENT STATE OF BOARD ----------" << std::endl;
	boardManager.PrintBoard();

	// Get the big grid coord
	std::vector<int> currentBigGridCoord = boardManager.GetCurrentBigBoardCoord();
	if (currentBigGridCoord.empty() || boardManager.HasBoardWon(currentBigGridCoord))
	{
		boardManager.CurrentBigBoardCoord(GetCoordFromInput(players[0].GetPlayerID(), "BIG BOARD"));
	}

	// Get Small grid placment
	std::vector<int> smallGridCoord = GetCoordFromInput(players[0].GetPlayerID(), "SMALL BOARD");

	// Place Letter in the selected grid
	boardManager.AddPlayerSelection(boardManager.GetCurrentBigBoardCoord(), smallGridCoord, players[0].GetPlayerLetter());
	boardManager.CurrentBigBoardCoord(smallGridCoord);

	boardManager.PrintBoard();

	return true;
}

std::vector<int> GameStateInGame::GetCoordFromInput(int playerID, std::string boardSize)
{
	std::cout << "Player " << playerID << " Please which cell on the " << boardSize << " you would like to play" << std::endl;
	std::cout << "Please input a number between 1 and 2 " << std::endl;
	std::cout << "eg. 2 = the last column " << std::endl;

	std::cout << BoardGridIndex << std::endl;


	std::string x;
	std::cin >> x;

	while (x.size() < 1 || !isdigit(x[0]))
	{
		std::cout << "Player " << playerID << " Please which cell on the " << boardSize << " you would like to play" << std::endl;
		std::cout << "Please input a number between 1 and 9." << std::endl;
		std::cout << "eg. 2 = the last column " << std::endl;

		std::cout << BoardGridIndex << std::endl;

		std::cin >> x;
	}

	std::cout << "Please input another number between 1 and 2." << std::endl;
	std::cout << "eg. 1 = the middle row " << std::endl;
	std::cout << BoardGridIndex << std::endl;

	std::string y;
	std::cin >> y;

	while (y.size() < 1 || !isdigit(y[0]))
	{
		std::cout << "Please input another number between 1 and 2." << std::endl;
		std::cout << "eg. 1 = the middle row " << std::endl;
		std::cout << BoardGridIndex << std::endl;

		std::cin >> y;
	}

	std::vector<int> coord{ std::stoi(x), std::stoi(y) };
	return coord;
}



