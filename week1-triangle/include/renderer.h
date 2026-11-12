#ifndef WEEK1_TRIANGLE_INCLUDE_RENDERER_H_
#define WEEK1_TRIANGLE_INCLUDE_RENDERER_H_
#include <SDL3/SDL.h>

struct AppState {
    SDL_Window *window = nullptr;
    SDL_Window *popup_window = nullptr;
    SDL_Renderer *popup_renderer = nullptr;
    SDL_Renderer *renderer = nullptr;
    SDL_Texture *rect_texture = nullptr;
};
#endif
