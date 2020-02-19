#include "Personaje.h"
#include <allegro.h>
#include <cstdlib>
#define MAXFILAS 20 // eje y
#define MAXCOLS 31 // eje x

Personaje::Personaje(int x,int y)
{
    px=x;
    py=y;
    dir=rand()%4;
    pacbmp=load_bitmap("pacman.bmp",NULL);
    pacman=create_bitmap(33,33);
}

void Personaje::Draw_Character()
{
    blit(pacbmp,pacman,dir*33,0,0,0,33,33);
    draw_sprite(buffer,pacman,px,py);//transparencia de pacman
}
