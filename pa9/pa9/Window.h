/*
Authors: Parker Anderson, Jeff Sein, Kealohi Grondin
Version: 1.0
Date: 4/21/18
Filename: Window.h
Description: The window header file which contains the states of the game
(i.e. start, play, and end)
*/

#ifndef WINDOW_H
#define WINDOW_H

#include "Global.h"

//States of the game
int start(RenderWindow * window);
int play(RenderWindow * window);
int end(RenderWindow * window);

#endif