#pragma once

/// Description:
/// This class is the PLayer Selection state that will display 
/// the dialogue and handle inputs
/// 
/// Author: Kody Wood
/// 
/// Written: April 2025
/// 


#include "BaseState.h"
#include "BoardManager.h"
#include "GameStateInGame.h"


class GameStatePlayerSelect : public BaseState
{
public:
	virtual void OnStateBegin();
	virtual void OnStateEnd();
	bool UpdateState(std::string input, std::vector<Player>& players, int playerTurn, BoardManager& boardManager, BaseState*& currentState) override;
protected:

private:
};

