#include <iostream>
#define SDL_MAIN_HANDLED // allow client entry point (main.cpp)
#include <SDL.h>

// Process finished with exit code -1073741515 (0xC0000135)
// errors like this ( ^^^ ) are probably because you forgot sdl2.dll...

int main() {
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window* window = SDL_CreateWindow("Hello World!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 500, 500, 0);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	SDL_Event event;

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

	int run = 1;
	while (run)
		while (SDL_PollEvent(&event))
			if (event.type == SDL_QUIT)
				 run = 0;

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}