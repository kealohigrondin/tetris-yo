/*
Authors: Parker Anderson, Jeff Sein, Kealohi Grondin
Version: 1.0
Date: 4/21/18
Filename: Window.cpp
Description: Window.cpp contains the definitions stated in Window.h
*/

#include "Window.h"
#include "TetrisApp.h"
int start(RenderWindow * window)
{
	Texture tLogo;
	Sprite sLogo;
	Font fPacifico;
	Text intro;
	Event event;
	
	if (!tLogo.loadFromFile("./Resources/tetris_logo.png"))
	{
		cout << "Unable to load 'tetris_logo.png'" << endl;
		return -1;
	}

	sLogo.setTexture(tLogo);
	sLogo.setScale(0.5, 0.5);
	sLogo.setPosition(150, 50);

	if (!fPacifico.loadFromFile("./Resources/Pacifico.ttf"))
	{
		cout << "Unable to load 'Pacifico.ttf'" << endl;
		return -1;
	}

	intro.setFont(fPacifico);
	intro.setString("Press Enter to Start");
	intro.setCharacterSize(60);
	intro.setFillColor(Color::Red);
	intro.setPosition(150, 400);


	while (window->isOpen())
	{
		while (window->pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window->close();
			}
			if (event.type == Event::KeyPressed)
			{
				if (event.key.code == Keyboard::Return)
				{
					return 0;
				}
			}
			break;
		}
		window->clear();
		window->draw(sLogo);
		window->draw(intro);
		window->display();
	}

	return -1;
}

int play(RenderWindow * window)
{
	Sprite gameBackground;
	Texture t;
	t.loadFromFile("GameBoard.png");
	gameBackground.setTexture(t);
	TetrisApp game;
	Event event;

	while (window->isOpen())
	{
		while (window->pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window->close();
			}
			if (event.type == Event::KeyPressed)
			{
				if (event.key.code == Keyboard::Return)
				{
					window->close();
					return -1;
				}
			}
			break;
		}
		window->clear();
		window->draw(gameBackground);
		game.insertCell();
		game.displayBoard(window);
		window->display();
	}

	return 0;
}

//int end(RenderWindow * window)
//{
//
//}