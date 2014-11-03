#include<stdio.h>
#include"SDL.h"

int main()
{
	SDL_Window *window = NULL;

	SDL_init(SDL_INIT_EVERYTHING);
	
	window = SDL_CreateWindow("SDL Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, NULL);
	
	SDL_Delay(5000);
	
	SDL_DestroyWindow(window);

	SDL_Quit();

	return 0;
}