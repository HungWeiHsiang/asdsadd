#pragma once
#include "game.hpp"

class gameobject
{
public:
	gameobject(const char* texturesheet,SDL_Renderer* ren,
	int x,int y);
	~gameobject();
	void update();
	void render();
private:
	int xpos;
	int ypos;
	SDL_Texture* objtexture;
	SDL_Rect srcrect;
	SDL_Rect destrect;
	SDL_Renderer* renderer;
};
