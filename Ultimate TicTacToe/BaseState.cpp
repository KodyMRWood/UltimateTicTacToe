#include <iostream>

#include "BaseState.h"

BaseState::BaseState() 
{
	// Stub
}

void BaseState::OnStateBegin()
{

}
void BaseState::OnStateEnd()
{
}

bool BaseState::UpdateState(std::string input, std::vector<Player>& players, int playerTurn, BoardManager& boardManager, BaseState*& currentState)
{

	if (input == "exit" || input == "Exit" )
	{
		return false;
	}

	if (input == "help" || input == "Help")
	{
		std::cout << "Help Menu" << std::endl;
		std::cout << "This is a tic tac toe game" << std::endl;
		std::cout << "You can play by selecting a cell on the board" << std::endl;
		std::cout << "You can exit the game by typing 'exit'" << std::endl;
		std::cout << "You can get help by typing 'help'" << std::endl;
		return true;
	}
	return true;
}