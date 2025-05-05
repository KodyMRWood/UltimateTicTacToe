#pragma once

/// Description:
/// This class is the base state class that will be inherited for any state in the game
/// 
/// Author: Kody Wood
/// 
/// Written: April 2025
/// 

#include "Player.h"

class BaseState
{
public:
	BaseState();

	virtual void OnStateBegin();
	virtual void OnStateEnd();
	virtual bool UpdateState(Player* player);
protected:
private:

};