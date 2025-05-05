#pragma once

/// Description:
/// This class is responsible for the players
/// 
/// Author: Kody Wood
/// 
/// Written: April 2025

class Player
{
public:
	Player();
	Player(int ID) : playerID(ID) {};

	int GetPlayerID() const;

protected:

private:
	int playerID;
};