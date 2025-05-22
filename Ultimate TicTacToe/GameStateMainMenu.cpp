#include <iostream>

#include "GameStateMainMenu.h"

void GameStateMainMenu::OnStateBegin()
{
	std::cout << "Main Menu" << std::endl;
	nextGameState = new GameStatePlayerSelect();
}
void GameStateMainMenu::OnStateEnd()
{
}
bool GameStateMainMenu::UpdateState(std::string input, std::vector<Player>& players, int playerTurn, BoardManager& boardManager, BaseState*& currentState)
{
	std::cin >> input;

	if (!BaseState::UpdateState(input, players, playerTurn, boardManager, currentState))
	{
		return false;
	}

	if (input == "play")
	{
		currentState = nextGameState;
		currentState->OnStateBegin();
	}
	return true;
}