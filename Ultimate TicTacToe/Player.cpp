#include "Player.h"

int Player::GetPlayerID() const
{
	return playerID;
}

char Player::GetPlayerLetter() const
{
	return playerLetter;
}

void Player::SetPlayerLetter(char letter)
{
	playerLetter = letter;
}
