
#include "GameStatePlayerSelect.h"

void GameStatePlayerSelect::OnStateBegin()
{
	nextGameState = new GameStateInGame();

	std::cout << "Player Select" << std::endl;
}

void GameStatePlayerSelect::OnStateEnd()
{
}

bool GameStatePlayerSelect::UpdateState(std::string input, std::vector<Player>& players, int playerTurn, BoardManager& boardManager, BaseState*& currentState)
{

	std::cout << "Player 1 input your letter. If this message repeats you have input an invalid letter" << std::endl;
	std::cin >> input;

	if (!BaseState::UpdateState(input, players, playerTurn, boardManager, currentState))
	{
		return false;
	}

	while (input.size() < 1 && isalpha(input[0]))
	{
		std::cout << "Player 1 input your letter. If this message repeats you have input an invalid letter" << std::endl;
		std::cin >> input;
	}

	
	players[0].SetPlayerLetter(input[0]);


	std::cout << "Player 2 input your letter. If this message repeats you have input an invalid letter" << std::endl;
	std::cin >> input;
	while (input.size() < 1 && isalpha(input[0]) || input[0] == players[0].GetPlayerLetter())
	{
		std::cout << "Player 2 input your letter. If this message repeats you have input an invalid letter" << std::endl;
		std::cin >> input;
	}
	players[1].SetPlayerLetter(input[0]);

	currentState = nextGameState;
	currentState->OnStateBegin();
	return true;
}