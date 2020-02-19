#include "Fantasma.h"
#include "Mapa.h"
#include <allegro.h>
#include <cstdlib>
#define MAXFILAS 20 // eje y
#define MAXCOLS 31 // eje x

Fantasma::Fantasma(int x,int y)
{
    _x=x;
    _y=y;
    fdir=rand()%4;
    enebmp=load_bitmap("enemigo.bmp",NULL);
    enemigo=create_bitmap(30,30);
    buffer=create_bitmap(880,600);
    muertebmp=load_bitmap("muerte.bmp",NULL);
}

//Fantasma::~Fantasma(){}

void Fantasma::Draw_enemy() const
{
    blit(enebmp,enemigo,0,0,0,0,30,30);
    draw_sprite(buffer,enemigo,_x,_y);
}

void Fantasma::Muerte()
{
    if(py==_y && px==_x || _y==anteriorpy&& _x==anteriorpx)
    {
        for(int i=0;i<=5;i++)
        {
            clear(pacman);
            clear(buffer);
            Mapa.Draw_Map();
            blit(muertebmp,pacman,i*33,0,0,0,33,33);///dibuja la muerte
            draw_sprite(buffer,pacman,px,py);
            Pantalla();
            rest(80);
        }
        px=30*14;
        py=30*2;
        dir=4;
    }
}

void Fantasma::Enemy()
{
    Draw_enemy();
    Muerte();
    if(mapa[_y/30][_x/30]=='|')
    {
        fdir=rand()%4;
    }
    if(fdir==0)
    {
        if(mapa[_y/30][(_x-30)/30]!='X')
        {
            _x-=30;
        }else {fdir=rand()%3;}//genera un valor al azar entre 0 y 3
    }
    else if(fdir==1)
    {
        if(mapa[_y/30][(_x+30)/30]!='X')
        {
            _x+=30;
        }else {fdir=rand()%3;}//genera un valor al azar entre 0 y 3
    }
    if(fdir==2)
    {
        if(mapa[(_y-30)/30][_x/30]!='X')
        {
            _y-=30;
        }else {fdir=rand()%3;}//genera un valor al azar entre 0 y 3
    }
    if(fdir==3)
    {
        if(mapa[(_y+30)/30][_x/30]!='X')
        {
            _y+=30;
        }else {fdir=rand()%3;}//genera un valor al azar entre 0 y 3
    }
    //atajos
    if(_x<=-30){_x=870;}
        else if(_x>=870){_x=-30;}
}
