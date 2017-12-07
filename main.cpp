#include <iostream>
#include <SDL2/SDL.h>

int main() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "Error encountered initializing" << std::endl
                  << SDL_GetError();
    };

    SDL_Window *window = SDL_CreateWindow(
            "Name",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            640,
            480,
            SDL_WINDOW_SHOWN
    );

    SDL_Surface *windowSurface = SDL_GetWindowSurface(window);
    SDL_Surface *imageSurface = SDL_LoadBMP("assets/test.bmp");

    if (imageSurface == NULL) {
        std::cout << "Error loading surface: " << std::endl << SDL_GetError();
    }

    SDL_BlitSurface(imageSurface, NULL, windowSurface, NULL);
    SDL_UpdateWindowSurface(window);

    SDL_Delay(5000);
}