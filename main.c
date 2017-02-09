#include <stdbool.h>
#include "draw.h"

int main(int argc, char *argv[]) {

    SDL_Surface* screen;
    SDL_TimerID timer;
    SDL_Event ev;
    bool play = true;

    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);

    screen = SDL_SetVideoMode(520,540,0,SDL_ANYFORMAT);

    draw_playground(screen);
    SDL_Flip(screen);

    SDL_WaitEvent(&ev);
    while(ev.type != SDL_QUIT)
        SDL_WaitEvent(&ev);
    SDL_Quit();

    return 0;
}
