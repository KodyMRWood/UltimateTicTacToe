#pragma once

/// Description:
/// This class is for the main menu state
/// 
/// Author: Kody Wood
/// 
/// Written: April 2025
/// 

#include "BaseState.h"

class GameStateMainMenu : public BaseState
{
public:
	virtual void OnStateBegin();
	virtual void OnStateEnd();
	virtual bool UpdateState(Player* player);
protected:

private:
};

/*

*/