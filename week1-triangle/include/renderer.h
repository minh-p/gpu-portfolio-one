#ifndef WEEK1_TRIANGLE_INCLUDE_RENDERER_H_
#define WEEK1_TRIANGLE_INCLUDE_RENDERER_H_
#include <SDL3/SDL.h>

struct AppState {
    SDL_Window *window;
    SDL_Window *popup_window;
    SDL_Renderer *popup_renderer;
    SDL_Renderer *renderer;
    AppState()
        : window{nullptr}, renderer{nullptr}, popup_window{nullptr},
          popup_renderer{nullptr} {}
};
#endif
