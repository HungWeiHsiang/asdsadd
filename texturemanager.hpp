#pragma once
#include "game.hpp"
class texturemanager
{
public:
	static SDL_Texture* loadtexture
	(const char* fileName,SDL_Renderer* ren);
};
