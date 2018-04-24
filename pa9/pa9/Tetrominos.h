/*
Authors: Parker Anderson, Jeff Sein, Kealohi Grondin
Version: 1.0
Date: 4/21/18
Filename: Tetrominos.h
Description: The tetrominos header file which contains the class definitions for
the class Tetrominos
*/
#pragma once 

#include <time.h>
#include <stdlib.h>
#include "Global.h"

class Tetrominos
{
public:
	Tetrominos();
	~Tetrominos();
	Tetrominos(Tetrominos & copy);
	Tetrominos const & operator = (Tetrominos & copy);

	// Functions for playing the game
	void display(int row, int col, RenderWindow * window);
	//void timeDrop();
	//void softDrop(); //down arrow
	//void hardDrop(TetrisApp * tetris); // insta drop
	//int check_lockDown(TetrisApp * tetris);
	//void lockDown(TetrisApp * tetris);
	//void moveLeft(TetrisApp * tetris);
	//void moveRight(TetrisApp * tetris);
	//void rotate(TetrisApp * tetris);
	//int occupied(TetrisApp * tetris);
	//void makePiece(RenderWindow * window);
	void setCell();

private:
	int shape;
	int locked;
	int rotation;
	Sprite cells;
	//int * x;
	//int * y;
	/*void clear();
	void copy(Tetrominos & copy);*/
};