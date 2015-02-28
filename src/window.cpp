// Creating window with SDL 2

#include "window.h"
int main(int argc, char* argv[]) {

    bool quit = false;
    GLuint WIDTH = 800, HEIGHT = 600;                                       // Width in pixels and height in pixels

    SDL_Event e;

    SDL_Window *window;                                                     // Declare a pointer

    SDL_Init(SDL_INIT_VIDEO);                                               // Initialize SDL2

    window = SDL_CreateWindow(                                              // Creates the window with the following settings:
        "GAHM Window",                                                      // window title
        SDL_WINDOWPOS_UNDEFINED,                                            // initial x position
        SDL_WINDOWPOS_UNDEFINED,                                            // initial y position
        WIDTH,
        HEIGHT,
        SDL_WINDOW_OPENGL                                                   // flags see below
    );

    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK){
      std::cout << "Failed to initialize GLEW" << std::endl;
      return -1;
    }

    if (window == NULL) {                                                   // Check that the window was successfully made
        printf("Could not create window: %s\n", SDL_GetError());            // If the window couldn't be created
        return 1;
    }

    while( !quit ){
      //Handle events on queue
            while( SDL_PollEvent( &e ) != 0 ){
                //User requests quit
                if( e.type == SDL_QUIT ){
                    quit = true;
                }
            }
    }
    SDL_DestroyWindow(window);                                              // Close and destroy the window

    // Clean up
    SDL_Quit();
    return 0;
}
