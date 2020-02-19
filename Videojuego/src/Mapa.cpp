#include "Mapa.h"
#include <allegro.h>
#include <cstdlib>
#define MAXFILAS 20 // eje y
#define MAXCOLS 31 // eje x

Mapa::Mapa()
{
    buffer=create_bitmap(880,600);
    roca=load_bitmap("roca.bmp",NULL);
    comida=load_bitmap("Comida.bmp",NULL
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
}

void Mapa::Draw_Map()
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

void Mapa::Pantalla()
{
    blit(buffer,screen,0,0,0,0,880,600);
}

void Mapa::Draw_Food()
{
    int row,col;
    for(row=0;row<MAXFILAS;row++)
    {
        for(col=0;col<MAXCOLS;col++)
        {
            if(mapa[row][col]=='O')
            {
                draw_sprite(buffer,comida,col*30,row*30);// la roca mide 30
                if(py/30 ==row && px/30 ==col)
                {
                    mapa[row][col]=' ';
                }
            }
        }
    }
}


bool Mapa::End_Game()
{
    int row,col;
    for(row=0;row<MAXFILAS;row++)
    {
        for(col=0;col<MAXCOLS;col++)
        {
            if(mapa[row][col]=='O')
            {
                return true;
            }

        }
    }
    return false;
}
