#ifndef MAPA_H
#define MAPA_H
#include <allegro.h>
#include <cstdlib>
#define MAXFILAS 20 // eje y
#define MAXCOLS 31 // eje x

class Mapa
{
    private:
            BITMAP *buffer;
            BITMAP *roca;
            char mapa;
            int row,col;
    public:
        Mapa();
        void base_mapa();
        void dibujar_mapa();
        void Pantalla();
};

#endif // MAPA_H
