#include <iostream>

#include "GameStatePlayerSelect.h"

void GameStatePlayerSelect::OnStateBegin()
{

}
void GameStatePlayerSelect::OnStateEnd()
{
}
bool GameStatePlayerSelect::UpdateState(Player* player)
{
	std::string input;
	std::cin >> input;

	if (input == "a")
	{
		//currentGameState = Game::INGAME;
		//std::cout << currentGameState;
	}
	return true;
}