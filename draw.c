
#include "draw.h"

void draw_myline(SDL_Surface* output,int size_of_line,int x0,int y0,int x1, int y1,Uint32 color){
    double dx = x1-x0, dy = y1-y0;
    double step = sqrt(dx*dx + dy*dy)/size_of_line;
    if (step != 0) {
        dx /= step;
        dy /= step;
    }
    double i;
    for (i = 0; i <= step; i = i + 0.1)
        filledCircleColor(output, x0 + dx*i, y0 + dy*i, size_of_line, color);
//    for (i = 0; i <= step; i = i + 0.1)
//        filledCircleColor(output, x0 + dx * i, y0 + dy * i + 1, size_of_line - 3, 0x000000ff);
}
//560 magas
//620 <->
void draw_playground(SDL_Surface* output){
    int i,j;
    for(i = 0; i < 520; i = i + 20)
        for(j = 0; j < 540; j = j + 20)
            filledCircleColor(output,i + 10, j + 10, 1, 0xffffffff);
    draw_myline(output,2,250,0,250,80,0xff0000ff);
    draw_myline(output,2,270,0,270,80,0xff0000ff);
    draw_myline(output,2,250,80,270,80,0xff0000ff);

    draw_myline(output,2,30,30,90,30,0xff0000ff);
    draw_myline(output,2,90,30,90,70,0xff0000ff);
    draw_myline(output,2,90,70,30,70,0xff0000ff);
    draw_myline(output,2,30,70,30,30,0xff0000ff);

    draw_myline(output,2,130,30,210,30,0xff0000ff);
    draw_myline(output,2,210,30,210,70,0xff0000ff);
    draw_myline(output,2,210,70,130,70,0xff0000ff);
    draw_myline(output,2,130,70,130,30,0xff0000ff);

    draw_myline(output,2,30,110,30,130,0xff0000ff);
    draw_myline(output,2,30,130,90,130,0xff0000ff);
    draw_myline(output,2,90,130,90,110,0xff0000ff);
    draw_myline(output,2,90,110,30,110,0xff0000ff);

    draw_myline(output,2,0,170,90,170,0xff0000ff);
    draw_myline(output,2,90,170,90,250,0xff0000ff);
    draw_myline(output,2,90,250,0,250,0xff0000ff);

    draw_myline(output,2,130,110,130,250,0xff0000ff);
    draw_myline(output,2,130,250,150,250,0xff0000ff);
    draw_myline(output,2,150,250,150,190,0xff0000ff);
    draw_myline(output,2,150,190,210,190,0xff0000ff);
    draw_myline(output,2,210,190,210,170,0xff0000ff);
    draw_myline(output,2,210,170,210,170,0xff0000ff);
    draw_myline(output,2,210,170,150,170,0xff0000ff);
    draw_myline(output,2,150,170,150,110,0xff0000ff);

//////
    draw_myline(output,2,190,110,330,110,0xff0000ff);
    draw_myline(output,2,330,110,330,130,0xff0000ff);
    draw_myline(output,2,330,130,270,130,0xff0000ff);
    draw_myline(output,2,270,130,270,190,0xff0000ff);
    draw_myline(output,2,270,190,250,190,0xff0000ff);
    draw_myline(output,2,250,190,250,130,0xff0000ff);
    draw_myline(output,2,250,130,190,130,0xff0000ff);
    draw_myline(output,2,190,130,190,110,0xff0000ff);

//
    draw_myline(output,2,150,110,130,110,0xff0000ff);

    draw_myline(output,2,490,30,430,30,0xff0000ff);
    draw_myline(output,2,430,30,430,70,0xff0000ff);
    draw_myline(output,2,430,70,490,70,0xff0000ff);
    draw_myline(output,2,490,70,490,30,0xff0000ff);

    draw_myline(output,2,390,30,310,30,0xff0000ff);
    draw_myline(output,2,310,30,310,70,0xff0000ff);
    draw_myline(output,2,310,70,390,70,0xff0000ff);
    draw_myline(output,2,390,70,390,30,0xff0000ff);

    draw_myline(output,2,490,110,490,130,0xff0000ff);
    draw_myline(output,2,490,130,430,130,0xff0000ff);
    draw_myline(output,2,430,130,430,110,0xff0000ff);
    draw_myline(output,2,430,110,490,110,0xff0000ff);

    draw_myline(output,2,520,170,430,170,0xff0000ff);
    draw_myline(output,2,430,170,430,250,0xff0000ff);
    draw_myline(output,2,430,250,520,250,0xff0000ff);

    draw_myline(output,2,390,110,370,110,0xff0000ff);
    draw_myline(output,2,370,110,370,170,0xff0000ff);
    draw_myline(output,2,370,170,310,170,0xff0000ff);
    draw_myline(output,2,310,170,310,190,0xff0000ff);
    draw_myline(output,2,310,190,370,190,0xff0000ff);
    draw_myline(output,2,370,190,370,250,0xff0000ff);
    draw_myline(output,2,370,250,390,250,0xff0000ff);
    draw_myline(output,2,390,250,390,110,0xff0000ff);

    draw_myline(output,2,0,290,90,290,0xff0000ff);
    draw_myline(output,2,90,290,90,370,0xff0000ff);
    draw_myline(output,2,90,370,0,370,0xff0000ff);

    draw_myline(output,2,130,430,130,290,0xff0000ff);
    draw_myline(output,2,130,290,150,290,0xff0000ff);
    draw_myline(output,2,150,290,150,350,0xff0000ff);
    draw_myline(output,2,150,350,210,350,0xff0000ff);
    draw_myline(output,2,210,350,210,370,0xff0000ff);
    draw_myline(output,2,210,370,210,370,0xff0000ff);
    draw_myline(output,2,210,370,150,370,0xff0000ff);
    draw_myline(output,2,150,370,150,430,0xff0000ff);
    draw_myline(output,2,150,430,130,430,0xff0000ff);

    draw_myline(output,2,30,410,90,410,0xff0000ff);
    draw_myline(output,2,90,410,90,430,0xff0000ff);
    draw_myline(output,2,90,430,30,430,0xff0000ff);
    draw_myline(output,2,30,430,30,410,0xff0000ff);

    draw_myline(output,2,30,470,90,470,0xff0000ff);
    draw_myline(output,2,90,470,90,510,0xff0000ff);
    draw_myline(output,2,90,510,30,510,0xff0000ff);
    draw_myline(output,2,30,510,30,470,0xff0000ff);

    draw_myline(output,2,130,470,210,470,0xff0000ff);
    draw_myline(output,2,210,470,210,510,0xff0000ff);
    draw_myline(output,2,210,510,130,510,0xff0000ff);
    draw_myline(output,2,130,510,130,470,0xff0000ff);

    draw_myline(output,2,190,430,330,430,0xff0000ff);
    draw_myline(output,2,330,430,330,410,0xff0000ff);
    draw_myline(output,2,330,410,270,410,0xff0000ff);
    draw_myline(output,2,270,410,270,350,0xff0000ff);
    draw_myline(output,2,270,350,250,350,0xff0000ff);
    draw_myline(output,2,250,350,250,410,0xff0000ff);
    draw_myline(output,2,250,410,190,410,0xff0000ff);
    draw_myline(output,2,190,410,190,430,0xff0000ff);

    draw_myline(output,2,520,290,430,290,0xff0000ff);
    draw_myline(output,2,430,290,430,370,0xff0000ff);
    draw_myline(output,2,430,370,520,370,0xff0000ff);

    draw_myline(output,2,390,430,390,290,0xff0000ff);
    draw_myline(output,2,390,290,370,290,0xff0000ff);
    draw_myline(output,2,370,290,370,350,0xff0000ff);
    draw_myline(output,2,370,350,310,350,0xff0000ff);
    draw_myline(output,2,310,350,310,370,0xff0000ff);
    draw_myline(output,2,310,370,310,370,0xff0000ff);
    draw_myline(output,2,310,370,370,370,0xff0000ff);
    draw_myline(output,2,370,370,370,430,0xff0000ff);
    draw_myline(output,2,370,430,390,430,0xff0000ff);

    draw_myline(output,2,490,410,430,410,0xff0000ff);
    draw_myline(output,2,430,410,430,430,0xff0000ff);
    draw_myline(output,2,430,430,490,430,0xff0000ff);
    draw_myline(output,2,490,430,490,410,0xff0000ff);

    draw_myline(output,2,490,470,430,470,0xff0000ff);
    draw_myline(output,2,430,470,430,510,0xff0000ff);
    draw_myline(output,2,430,510,490,510,0xff0000ff);
    draw_myline(output,2,490,510,490,470,0xff0000ff);

    draw_myline(output,2,390,470,310,470,0xff0000ff);
    draw_myline(output,2,310,470,310,510,0xff0000ff);
    draw_myline(output,2,310,510,390,510,0xff0000ff);
    draw_myline(output,2,390,510,390,470,0xff0000ff);

    draw_myline(output,2,250,540,250,460,0xff0000ff);
    draw_myline(output,2,270,540,270,460,0xff0000ff);
    draw_myline(output,2,250,460,270,460,0xff0000ff);

    draw_myline(output,2,230,230,190,230,0xff0000ff);
    draw_myline(output,2,190,230,190,310,0xff0000ff);
    draw_myline(output,2,190,310,330,310,0xff0000ff);
    draw_myline(output,2,330,310,330,230,0xff0000ff);
    draw_myline(output,2,330,230,290,230,0xff0000ff);
}
