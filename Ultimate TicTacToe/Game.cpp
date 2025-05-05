#include "Game.h"

Game::Game()
{
	// Default Constructor
	players.push_back(Player(1));
	Player playerTwo(2);
	players.push_back(playerTwo);
	isGamePlaying = true;

	GameStateMainMenu* mainMenuState = new GameStateMainMenu();
	currentGameState = mainMenuState;
	
}

Game::~Game()
{

}


BaseState Game::GetGameState()
{
	return BaseState();
}

void Game::SetGameState( BaseState newState)
{
	currentGameState = &newState;
}

void Game::Update()
{
	if (!players.empty() && currentGameState != nullptr)
	{
		isGamePlaying = currentGameState->UpdateState(&players[0]);
	}
	//switch (currentGameState)
	//{
	//case Game::MAINMENU:
	//	if (input == "a")
	//	{
	//		currentGameState = Game::INGAME;
	//		std::cout << currentGameState;
	//	}
	//	break;
	//case Game::PLAYERSELECT:
	//
	//	if (input == "x")
	//	{
	//	
	//	}
	//	if (input == "o")
	//	{
	//
	//	}
	//	break;
	//case Game::INGAME:
	//	if (input == "p")
	//	{
	//		boardManager.PrintBoard();
	//	}
	//	break;
	//case Game::POSTGAME:
	//	if (input == "r")
	//	{
	//		//replay
	//	}
	//	break;
	//case Game::DEFAULT:
	//	break;
	//default:
	//	break;
	//}
}

BoardManager Game::GetBoardManager()
{
	return boardManager;
}

bool Game::GetIsGamePlaying()
{
	return isGamePlaying;
}

