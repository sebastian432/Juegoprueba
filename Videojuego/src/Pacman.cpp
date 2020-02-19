#include "Pacman.h"
#include <allegro.h>
#include <cstdlib>

Pacman::Pacman(int x,int y)
{
    px=x;
    py=y;
    dir=rand()%4;
    buffer=create_bitmap(880,600);
    pacbmp=load_bitmap("pacman.bmp",NULL);
    pacman=create_bitmap(33,33);
}

void Pacman::Draw_Character()
{
    blit(pacbmp,pacman,dir*33,0,0,0,33,33);
    draw_sprite(buffer,pacman,px,py);//transparencia de pacman
}

void Pacman::Mover_Pacman()
{
  if(key[KEY_RIGHT])
        {dir=1;}
        else if(key[KEY_LEFT])
        {dir=0;}
        else if(key[KEY_UP])
        {dir=2;}
        else if(key[KEY_DOWN])
        {dir=3;}

        if(dir==0)
        {   if(mapa[py/30][(px-30)/30]!='X')
            {
                px-=30;
            }
            else
                dir==4;
        }
        else if(dir==1)
        {
            if(mapa[py/30][(px+30)/30]!='X')
            {
                px+=30;
            }
            else
                dir==4;
        }
        else if(dir==2)
        {
            if(mapa[(py-30)/30][px/30]!='X')
            {
                py-=30;
            }
            else
                dir==4;
        }
        else if(dir==3)
            {
                if(mapa[(py+30)/30][px/30]!='X')
                {
                    py+=30;
                }
                else
                    dir==4;
            }
        if(px<=-30){px=870;}
        else if(px>=870){px=-30;}

}











