#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Controlador.hpp>
#include <Naveh.hpp>
#include <curses.h>
#include <unistd.h>
#include <list>
using namespace std;

int main(int argc, char const *argv[])
{
    Ventana v;
    Controlador *control = new Controlador();
     Naveh* nave = new Naveh();

    Dibujo *d1 = new Dibujo(1, 8, "Naveh");

    list<Dibujo *> dibujos;
    dibujos.push_back(d1);
    dibujos.push_back(nave);

    list<Actualizable *> actualizables;
    actualizables.push_back(control);
    actualizables.push_back(nave);

    bool ejecutar = true;
    while (ejecutar)
    {
        v.actualizar(actualizables);
        v.dibujar(dibujos);
    }

    return 0;
}
