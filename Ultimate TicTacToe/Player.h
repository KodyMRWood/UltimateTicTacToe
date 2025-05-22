#pragma once

/// Description:
/// This class is responsible for the players
/// 
/// Author: Kody Wood
/// 
/// Written: April 2025

#include <iostream>

class Player
{
public:
	Player();
	Player(int ID) : playerID(ID) {};

	int GetPlayerID() const;

	char GetPlayerLetter() const;
	void SetPlayerLetter(char letter);

protected:

private:
	int playerID;
	char playerLetter;
};