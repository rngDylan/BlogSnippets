#include <iostream>
#include <SDL.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main(int, char**) {
	SDL_Window* window = NULL;
	SDL_Surface* screenSurface = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << "Error" << std::endl;
		return 1;
	} else {
		window = SDL_CreateWindow("SDLCMake", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL) {
			std::cout << "Error in Window Creation: " << SDL_GetError();
		} else {
			screenSurface = SDL_GetWindowSurface(window);
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0x00, 0xBB, 0x00));
			SDL_UpdateWindowSurface(window);
			SDL_Delay(3000);
		}
	}
	SDL_DestroyWindow(window);

	SDL_Quit();

	return 0;
}