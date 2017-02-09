#ifndef DRAW_H_INCLUDED
#define DRAW_H_INCLUDED

#include <SDL.h>
#include <SDL_gfxPrimitives.h>
#include <math.h>

void draw_myline(SDL_Surface* output,int size_of_line,int x0,int y0,int x1, int y1,Uint32 color);

void draw_playground(SDL_Surface* output); // for help, there is a file which has all the coordinates

#endif // DRAW_H_INCLUDED
