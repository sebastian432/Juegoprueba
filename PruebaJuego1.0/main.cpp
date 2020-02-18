#include <allegro.h>
#include <cstdlib>
#include "Mapa.h"
#define MAXFILAS 20 // eje y
#define MAXCOLS 31 // eje x
BITMAP *buffer;// mapa de bits con dimensiones de nuestra pantalla
BITMAP *roca;

using namespace std;

void Game();

int main()
{
    allegro_init();
    install_keyboard();

    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,870,600,0,0);
    Game();

}
END_OF_MAIN();


    Mapa m;


void Game()
{
    while(!key[KEY_ESC])
    {
        m.dibujar_mapa();
    }
}






