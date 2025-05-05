/// Description:
/// This is the main file for Ultimate Tic Tac Toe
/// 
/// Author: Kody Wood
/// 
/// Written: April 2025

#include <iostream>
#include <windows.h>

#include "Game.h"
#include "Board.h"
#include "Player.h"
#include "BoardManager.h"


int main()
{
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);
	//  Text color recommendations, 15 = board, 11 = player 1, 12 = player 2, 13 = help, 10 = Dev 
	SetConsoleTextAttribute(console, 10);
	std::cout << "Hello World" << std::endl;
	SetConsoleTextAttribute(console, 10);
	std::cout << "Welcome to the Ultimate Tic Tac Toe Game, Developed by Kody Wood" << std::endl;

	Game gameManager;

	//std::cout << "x|x|x | x|x|x | x|x|x \n"
	//			 "x|x|x | x|x|x | x|x|x \n"
	//			 "x|x|x | x|x|x | x|x|x \n"
	//			 "--------------------- \n"
	//			 "x|x|x | x|x|x | x|x|x \n"
	//			 "x|x|x | x|x|x | x|x|x \n"
	//			 "x|x|x | x|x|x | x|x|x \n"
	//			 "--------------------- \n"
	//			 "x|x|x | x|x|x | x|x|x \n"
	//			 "x|x|x | x|x|x | x|x|x \n"
	//			 "x|x|x | x|x|x | x|x|x \n";
	
		// Main game loop
		while (gameManager.GetIsGamePlaying())
		{
			gameManager.Update();
		}
}