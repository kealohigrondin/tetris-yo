#include "TetrisApp.h"

TetrisApp::TetrisApp() {
	height = BOARD_HEIGHT * CELL_SIZE;
	width = BOARD_WIDTH * CELL_SIZE;
	checkBoard = nullptr;
	board.setOutlineColor(Color::White);
	board.setFillColor(Color::Black);
	board.setOutlineThickness(2);
	board.setSize(Vector2f(width, height));
	isPlaying = 1;
	
}
TetrisApp::~TetrisApp() {
	
}
void TetrisApp::displayBoard(RenderWindow * window) {
	for (int row = 0; row < BOARD_HEIGHT; row++) {
		for (int col = 0; col < BOARD_WIDTH; col++) {
			//gameBoard[row][col].display(row, col, window); //not working
		}
	}
}

void TetrisApp::insertCell() {
	
}