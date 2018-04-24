#include "Tetrominos.h"

Tetrominos::Tetrominos() {
	shape = 0;
	locked = 0;
	rotation = 0;
	Texture t;
	t.loadFromFile("./Resources/BlueBlock.png");
	cells.setTexture(t);
}
Tetrominos::~Tetrominos() {

}
void Tetrominos::display(int row, int col, RenderWindow * window) {
	cells.setPosition(Vector2f(row * CELL_SIZE, col * CELL_SIZE));
	window->draw(cells);
}
void Tetrominos::setCell() {
	Texture t;
	t.loadFromFile("BlueBlock.png");
	cells.setTexture(t);
}