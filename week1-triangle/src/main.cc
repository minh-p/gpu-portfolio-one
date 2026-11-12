#include <SDL3/SDL_render.h>
#define SDL_MAIN_USE_CALLBACKS
#include "renderer.h"
#include <SDL3/SDL_main.h>

SDL_AppResult SDL_AppInit(void **appstate, int argc, char **argv) {
    SDL_SetAppMetadata("Triangle", "0.y.z", "dev.vhmp.triangle");
    SDL_SetHint(SDL_HINT_VIDEO_DRIVER, "wayland");
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        return SDL_APP_FAILURE;
    }

    AppState *state = new AppState{};
    *appstate = state;

    // Main Window and Renderer
    if (!SDL_CreateWindowAndRenderer("Triangle", 400, 400, 0, &state->window,
                                     &state->renderer)) {
        SDL_Log("Failed to create window and renderer: %s", SDL_GetError());
        return SDL_APP_FAILURE;
    }

    return SDL_APP_CONTINUE;
}

SDL_AppResult SDL_AppIterate(void *appstate) {
    AppState *state = static_cast<AppState *>(appstate);

    static Uint64 last_trigger = 0;
    Uint64 now = SDL_GetTicks(); // Time in milliseconds

    if (now - last_trigger >= 1000) {
        last_trigger = now;
        SDL_SetRenderDrawColor(state->renderer, 30, 30, 30, 255);
        SDL_RenderClear(state->renderer);
        SDL_FRect r{static_cast<float>(SDL_rand(400)),
                    static_cast<float>(SDL_rand(400)), 100, 50};
        SDL_SetRenderDrawColor(state->renderer, 255, 255, 255, 255);
        SDL_RenderFillRect(state->renderer, &r);
        SDL_RenderPresent(state->renderer);
    }

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
        SDL_DestroyRenderer(state->renderer);
        SDL_DestroyWindow(state->window);
        delete state;
    }
}
