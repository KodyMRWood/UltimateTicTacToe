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

bool BaseState::UpdateState(Player* player)
{
	std::string input;
	std::cin >> input;

	if (input == "exit" || input == "Exit" || input == "e")
	{
		return false;
	}
	return true;
}