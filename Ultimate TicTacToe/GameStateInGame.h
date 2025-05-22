#pragma once

#include "BaseState.h"
#include "BoardManager.h"

class GameStateInGame : public BaseState
{
public:
	GameStateInGame();

	std::string const BoardGridIndex =
		"    0  1  2 \n   0  |  |  \n    --------\n   1  |  |  \n    --------\n   2  |  |  \n";

	virtual void OnStateBegin();
	virtual void OnStateEnd();
	virtual bool UpdateState(std::string input, std::vector<Player>& players, int playerTurn, BoardManager& boardManager, BaseState*& currentState) override;
protected:

	BaseState* nextGameState;
private:

	std::vector<int> GetCoordFromInput(int playerID, std::string boardSize);
};