#ifndef FANTASMA_H
#define FANTASMA_H
#include "Mapa.h"
#include "Personaje.h"
#include <allegro.h>
#include <cstdlib>
#define MAXFILAS 20 // eje y
#define MAXCOLS 31 // eje x



class Fantasma
{
    private:
        BITMAP *enebmp;
        BITMAP *enemigo;
        BITMAP *buffer;
        BITMAP *muertebmp;
        BITMAP *pacman;

        int fdir;
        int _x,_y;
        int px,py;
        int anteriorpx,anteriorpy;
    public:
        Fantasma(int x,int y);
        void Draw_enemy() const; // solo trabaja con las posiciones, no las modifica
        void Enemy();// si modifica los valores
        void Muerte();
        friend class Mapa;
        friend class Personaje;
};

#endif // FANTASMA_H
