#define SDL_MAIN_USE_CALLBACKS
#include "renderer.h"
#include <SDL3/SDL_main.h>
#include <iostream>

SDL_AppResult SDL_AppInit(void **appstate, int argc, char **argv) {
    SDL_SetAppMetadata("Triangle", "0.y.z", "dev.vhmp.triangle");
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        return SDL_APP_FAILURE;
    }

    AppState *state = new AppState{};
    *appstate = state;

    if (!SDL_CreateWindowAndRenderer("Triangle", 400, 400, SDL_WINDOW_RESIZABLE,
                                     &state->window, &state->renderer)) {
        SDL_Log("Failed to create window and renderer: %s", SDL_GetError());
        return SDL_APP_FAILURE;
    }

    SDL_Log("Video driver: %s", SDL_GetCurrentVideoDriver());
    return SDL_APP_CONTINUE;
}

SDL_AppResult SDL_AppIterate(void *appstate) {
    AppState *state = static_cast<AppState *>(appstate);

    SDL_SetRenderDrawColor(state->renderer, 30, 30, 30, 255);
    SDL_RenderClear(state->renderer);
    SDL_RenderPresent(state->renderer);

    return SDL_APP_CONTINUE;
}

SDL_AppResult SDL_AppEvent(void *appstate, SDL_Event *event) {
    if (event->type == SDL_EventType::SDL_EVENT_QUIT) {
        return SDL_APP_SUCCESS;
    }
    return SDL_APP_CONTINUE;
}

void SDL_AppQuit(void *appstate, SDL_AppResult result) {
    AppState *state = static_cast<AppState *>(appstate);

    if (state) {
        SDL_DestroyWindow(state->window);
        SDL_DestroyRenderer(state->renderer);
        delete state;
    }
}
