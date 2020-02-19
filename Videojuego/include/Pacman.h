#ifndef PACMAN_H
#define PACMAN_H
#include <allegro.h>
#include <cstdlib>

class Pacman
{
    public:
        Pacman(int x,int y);
        void Draw_Character();
        void Mover_Pacman();
//        Pacman pac(30*14,30*2);
    private:
        BITMAP *pacbmp;
        BITMAP *pacman;
        BITMAP *buffer;
        int dir;//empieza sin moverse
        int px,py;
        char mapa[20][31];
};

#endif // PACMAN_H
