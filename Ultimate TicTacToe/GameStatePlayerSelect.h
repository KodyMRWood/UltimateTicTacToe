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

class GameStatePlayerSelect : public BaseState
{
public:
	virtual void OnStateBegin();
	virtual void OnStateEnd();
	virtual bool UpdateState(Player* player);
protected:

private:
};

