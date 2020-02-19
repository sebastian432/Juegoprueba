#include <allegro.h>
#include <cstdlib>
#include "Pacman.h"
#define MAXFILAS 20 // eje y
#define MAXCOLS 31 // eje x
BITMAP *buffer;// mapa de bits con dimensiones de nuestra pantalla
BITMAP *roca;
Pacman pac(30*14,30*2);

char mapa[MAXFILAS][MAXCOLS]={
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

void Draw_Map()
{
    int row,col;
    for(row=0;row<MAXFILAS;row++)
    {
        for(col=0;col<MAXCOLS;col++)
        {
            if(mapa[row][col]=='X')
            {
                draw_sprite(buffer,roca,col*30,row*30);// la roca mide 30
            }
        }
    }
}

void Pantalla()
{
    blit(buffer,screen,0,0,0,0,880,600);
}



int main()
{
    allegro_init();
    install_keyboard();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,880,600,0,0);

    buffer=create_bitmap(880,600);
    roca=load_bitmap("roca.bmp",NULL);
    while(!key[KEY_ESC] )
    {
        clear(buffer);// limpiar las posiciones anteriores
        Draw_Map();

        Pantalla();
    }
}
END_OF_MAIN();






