/*
Authors: Parker Anderson, Jeff Sein, Kealohi Grondin
Version: 1.1
Date: 4/24/18 2:40pm
Filename: main.cpp
Description: The main file for playing tetris;
*/

#include "Window.h"

int main()
{
	int playGame = 1;
	RenderWindow * window = new RenderWindow;

	window->create(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "TETRIS");

	if (start(window) == -1)//start menu
	{
		cout << "Something went wrong" << endl;
		return -1;
	}
	while (playGame != -1) {//plays the game
		playGame = play(window);
	}

	//ask to restart
	
	
}