#pragma once

/// Description:
/// This class is the base state class that will be inherited for any state in the game
/// 
/// Author: Kody Wood
/// 
/// Written: April 2025
/// 

#include <iostream>
#include <string>
#include <vector>

#include "Player.h"
#include "BoardManager.h"



class BaseState
{
public:
	BaseState();

	virtual void OnStateBegin();
	virtual void OnStateEnd();
	virtual bool UpdateState(std::string input, std::vector<Player> &players, int playerTurn, BoardManager& boardManager , BaseState*& currentState);
protected:

	BaseState* nextGameState;
private:

};