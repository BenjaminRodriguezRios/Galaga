#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Naveh : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Naveh(/* args */) : Dibujo("Naveh")
    {}
    ~Naveh() {}
    void Actualizar()
    {
    }
};
    

