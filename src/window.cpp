// Creating window with SDL 2

#include "SDL.h"
#include <stdio.h>

int main(int argc, char* argv[]) {

    SDL_Window *window;                                                     // Declare a pointer

    SDL_Init(SDL_INIT_VIDEO);                                               // Initialize SDL2

    window = SDL_CreateWindow(                                              // Creates the window with the following settings: 
        "GAHM Window",                                                      // window title
        SDL_WINDOWPOS_UNDEFINED,                                            // initial x position
        SDL_WINDOWPOS_UNDEFINED,                                            // initial y position
        1336,                                                               // width in pixels
        768,                                                                // height in pixels
        SDL_WINDOW_OPENGL                                                   // flags see below
    );

    if (window == NULL) {                                                   // Check that the window was successfully made
        printf("Could not create window: %s\n", SDL_GetError());            // If the window couldn't be created
        return 1;
    }

    SDL_Delay(5000);                                                        // Pause execution of window for 5000 milliseconds

    SDL_DestroyWindow(window);                                              // Close and destroy the window

    // Clean up
    SDL_Quit();
    return 0;
}
