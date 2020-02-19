#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "Fantasma.h"
#include "Mapa.h"
#include <allegro.h>
#include <cstdlib>
#define MAXFILAS 20 // eje y
#define MAXCOLS 31 // eje x

class Personaje
{
    private:
            BITMAP *pacbmp;
            BITMAP *pacman;
            BITMAP *buffer;
            int dir;//empieza sin moverse
            int px,py;
    public:
            Personaje(int x,int y);
            void Draw_Character();
            friend class Fantasma;
            friend class Mapa;

};

#endif // PERSONAJE_H
