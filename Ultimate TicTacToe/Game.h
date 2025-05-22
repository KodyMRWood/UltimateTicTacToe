#pragma once

/// Description:
/// This class will handle the game state and game logic
/// 
/// Author: Kody Wood
/// 
/// Written: April 2025

#include <vector>
#include <iostream>

#include "Player.h"
#include "BaseState.h"
#include "BoardManager.h"
#include "GameStateMainMenu.h"
#include "GameStatePlayerSelect.h"

class Game
{
public:
	Game();
	~Game();

	enum GameState
	{
		MAINMENU = 0,
		PLAYERSELECT = 1,
		INGAME = 2,
		POSTGAME = 3,
		DEFAULT = 10,
	};


	BaseState GetGameState();
	void SetGameState(BaseState newState);
	void Update();
	bool GetIsGamePlaying();

	// Board Methods
	BoardManager GetBoardManager();

	// Player Methods
	std::vector<Player> GetPlayers();

private:

	BaseState* currentGameState;
	std::vector<Player> players;
	BoardManager* boardManager;
	bool isGamePlaying = true;

};