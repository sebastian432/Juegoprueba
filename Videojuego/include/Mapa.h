#ifndef MAPA_H
#define MAPA_H
#include "Fantasma.h"
#include "Personaje.h"
#include <allegro.h>
#include <cstdlib>
#define MAXFILAS 20 // eje y
#define MAXCOLS 31 // eje x


class Mapa
{
    private:
            BITMAP *buffer;// mapa de bits con dimensiones de nuestra pantalla
            BITMAP *roca;
            BITMAP *comida;
            char mapa[MAXFILAS][MAXCOLS];
            int px,py;

    public:
        Mapa();
        void Draw_Map();
        void Pantalla();
        void Draw_Food();
        bool End_Game();

};

#endif // MAPA_H
