#include <iostream>

#include "GameStateMainMenu.h"

void GameStateMainMenu::OnStateBegin()
{

}
void GameStateMainMenu::OnStateEnd()
{
}
bool GameStateMainMenu::UpdateState(Player* player)
{
	std::string input;
	std::cin >> input;

	if (input == "a")
	{
		//currentGameState = Game::INGAME;
		std::cout << "Main Menu";

	}
	return true;
}