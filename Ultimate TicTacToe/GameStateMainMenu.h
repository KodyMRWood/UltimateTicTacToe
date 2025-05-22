#pragma once

/// Description:
/// This class is for the main menu state
/// 
/// Author: Kody Wood
/// 
/// Written: April 2025
/// 

#include "BaseState.h"
#include "BoardManager.h"
#include "GameStatePlayerSelect.h"

class GameStateMainMenu : public BaseState
{
public:
	virtual void OnStateBegin();
	virtual void OnStateEnd();
	bool UpdateState(std::string input, std::vector<Player>& players, int playerTurn, BoardManager& boardManager, BaseState*& currentState) override;
protected:

private:
};