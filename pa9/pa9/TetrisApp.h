/*
Authors: Parker Anderson, Jeff Sein, Kealohi Grondin
Version: 1.0
Date: 4/21/18
Filename: TetrisApp.h
Description: The tetris header file which contains the class definitions for
the class TetrisApp
*/
#pragma once
#ifndef TETRIS_APP
#define TETRIS_APP

#include "Tetrominos.h"

class TetrisApp
{
public:
	TetrisApp();
	~TetrisApp();
	TetrisApp(int width, int height);
	TetrisApp(TetrisApp & copy);
	TetrisApp const & operator = (TetrisApp & copy);

	void displayBoard(RenderWindow * window);
	void insertCell();
	bool occupied(int * x, int * y);
	int leftBound(int * x, int * y);
	int rightBound(int * x, int * y);
	int check_lockDown(int * x, int * y);
	void lockDown(int * x, int * y, RectangleShape * cells);
	void clearLine();
	void helper_clearLine(int x);
	void setPosition(int x, int y);

private:
	int width;
	int height;
	int * checkBoard; //-1 if game over (board is filled)
	RectangleShape board;
	Tetrominos gameBoard[10][20];
	int isPlaying; //1 means playing, 0 means not playing
	void clear();
	void copy(TetrisApp & copy);
};

#endif
