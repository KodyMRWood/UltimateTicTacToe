/// Description:
/// This is the main file for Ultimate Tic Tac Toe
/// 
/// Author: Kody Wood
/// 
/// Written: April 2025

#include <iostream>


int main()
{
	std::cout << " Hello World" << std::endl;

	// Main game loop
	while (true)
	{
		std::string input;
		std::cin >> input;
		if (input == "exit" || input == "Exit")
		{
			return -1;
		}
	}
}