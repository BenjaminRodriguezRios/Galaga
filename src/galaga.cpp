#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // cout<<"Press 'd' to --> ,  Press 'a' to <-- , Press 'q' to quit "<<endl;
    // Tamaño de pagina recomendado 33%
    Ventana v;

    Dibujo d1(25, 1, "naveh");


    bool ejecucion = true;
    while (ejecucion)
    {
        // ciclo de actualización
        v.Actualizar();
        if (getch() == 'q')
        {
            ejecucion = false;
        }
        if (getch() == 'd')
        {
            d1.AvanzarX(4);
        }
        if (getch() == 'a')
        {
            d1.RetrocederX(4);
        }
        if (getch() == 's')
        {
            d1.BajarY(3);
        }
        if (getch() == 'w')
        {
            d1.SubirY(3);
        }
        // ciclo de dibujo
        clear();
        // v.Dibujar();
        d1.Dibujar();
        refresh();
        usleep(41000);
    }

    return 0;
}