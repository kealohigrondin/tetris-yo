/*
Authors: Parker Anderson, Jeff Sein, Kealohi Grondin
Version: 1.0
Date: 4/21/18
Filename: Global.h
Description: Global.h contains all of the global variables we use for the game
(i.e. window dimensions, board dimensions, etc...)
*/

#ifndef GLOBAL_H
#define GLOBAL_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace sf;

//Window width/height (in pixels)
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 1000

//Board width/height (in cells)
#define BOARD_WIDTH 10
#define BOARD_HEIGHT 20

//Cell and game board pixels
#define CELL_SIZE 35		//Pixel size of the cell
#define BOARD_START_X 50	//Pixel index (x) of the gameboard
#define BOARD_START_Y 50	//Pixel index (y) of the gameboard


//Constants related to pieces
#define CELLS_PP 4			//Cells Per Piece is 4
#define TETROMINO_TYPE 7	//There are 7 different tetrominos
#define ROTATION 4			//Four differerent rotations per piece
#define O 0					//The square piece, color: cyan
#define I 1					//The line piece, color: red
#define T 2					//The T piece, color: silver
#define L 3					//The L piece, color: yellow
#define J 4					//The J piece, color: magenta
#define S 5					//The S piece, color: blue
#define Z 6					//The Z piece, color: green

#endif 
