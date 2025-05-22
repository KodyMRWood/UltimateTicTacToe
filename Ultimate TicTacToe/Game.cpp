#include "Game.h"

Game::Game()
{
	// Default Constructor
	players.push_back(Player(1));
	players.push_back(Player(2));
	isGamePlaying = true;

	GameStateMainMenu* mainMenuState = new GameStateMainMenu();
	currentGameState = mainMenuState;
	currentGameState->OnStateBegin();

	boardManager = new BoardManager();
	
}

Game::~Game()
{

}


BaseState Game::GetGameState()
{
	return *currentGameState;
}

void Game::SetGameState( BaseState newState)
{
	currentGameState = &newState;
}

void Game::Update()
{
	if (!players.empty())
	{
		isGamePlaying = currentGameState->UpdateState("", players,1, *boardManager, currentGameState);
	}
}

BoardManager Game::GetBoardManager()
{
	return *boardManager;
}

bool Game::GetIsGamePlaying()
{
	return isGamePlaying;
}

std::vector<Player> Game::GetPlayers()
{
	return players;
}

