#include <SDL.h>
#include "def.h"

int main() {
    SDL_Init(0);

    SDL_Window *window = SDL_CreateWindow("Blython", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 500, 500, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, NULL);
    SDL_Event event;

    bool running = true;

    while (running) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case (SDL_QUIT):
            }
        }
    }
}