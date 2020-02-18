#include "Mapa.h"
#include <allegro.h>
#include <cstdlib>

Mapa::Mapa(){
    buffer=create_bitmap(870,600);
    roca=load_bitmap("roca.bmp",NULL);
    char mapa[MAXFILAS][MAXCOLS]
    {
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
    "X  X  X|             |X  X  X",
    "X  X  X    O    O     X  X  X",
    "X  X  X       |       X  X  X",
    "X     X    X    X     X     X",
    "X  X  X    XXXXXX     X  X  X",
    "X  X  X  |         |  X  X  X",
    "X  X  X               X  X  X",
    "X          XXXXXX           X",
    "   O     |      X  |     O   ",
    "XXXXXXX    X          XXXXXXX",
    "X| O      |XXXXXX|       O |X",
    "X                           X",
    "X  X  X               X  X  X",
    "X  X  X               X  X  X",
    "X     X    X    X     X     X",
    "X  X  X    XXXXXX     X  X  X",
    "X  X  X               X  X  X",
    "X  X  X|   O    O    |X  X  X",
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
    };
}

void Mapa::base_mapa()
{
    char mapa[MAXFILAS][MAXCOLS]
    {
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
    "X  X  X|             |X  X  X",
    "X  X  X    O    O     X  X  X",
    "X  X  X       |       X  X  X",
    "X     X    X    X     X     X",
    "X  X  X    XXXXXX     X  X  X",
    "X  X  X  |         |  X  X  X",
    "X  X  X               X  X  X",
    "X          XXXXXX           X",
    "   O     |      X  |     O   ",
    "XXXXXXX    X          XXXXXXX",
    "X| O      |XXXXXX|       O |X",
    "X                           X",
    "X  X  X               X  X  X",
    "X  X  X               X  X  X",
    "X     X    X    X     X     X",
    "X  X  X    XXXXXX     X  X  X",
    "X  X  X               X  X  X",
    "X  X  X|   O    O    |X  X  X",
    "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX",
    };
}

void Mapa::dibujar_mapa()
{
    char mapa[row][col];
    for(row=0;row<MAXFILAS;row++)
    {
        for(col=0;col<MAXCOLS;col++)
        {
            if(mapa[row][col]=='X')
                draw_sprite(buffer,roca,col*30,row*30);
        }
    }
    Pantalla();
}


void Mapa::Pantalla()
{
    blit(buffer,screen,0,0,0,0,870,600);
}


