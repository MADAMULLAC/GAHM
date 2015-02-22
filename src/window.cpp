<<<<<<< HEAD
// Example program:
// Using SDL2 to create an application window

#include <SDL2/SDL.h>
=======
// Creating window with SDL 2

#include "SDL.h"
>>>>>>> master
#include <stdio.h>

int main(int argc, char* argv[]) {

<<<<<<< HEAD
    SDL_Window *window;                    // Declare a pointer

    SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2

    // Create an application window with the following settings:
    window = SDL_CreateWindow(
        "An SDL2 window",                  // window title
        SDL_WINDOWPOS_UNDEFINED,           // initial x position
        SDL_WINDOWPOS_UNDEFINED,           // initial y position
        640,                               // width, in pixels
        480,                               // height, in pixels
        SDL_WINDOW_OPENGL                  // flags - see below
    );

    // Check that the window was successfully made
    if (window == NULL) {
        // In the event that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
        return 1;
    }

    // The window is open: enter program loop (see SDL_PollEvent)

    SDL_Delay(3000);  // Pause execution for 3000 milliseconds, for example

    // Close and destroy the window
    SDL_DestroyWindow(window);
=======
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
>>>>>>> master

    // Clean up
    SDL_Quit();
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> master
