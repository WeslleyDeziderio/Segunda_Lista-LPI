#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{
    public:
        Triangulo();
        virtual ~Triangulo();
        double calcularArea(double base, double altura);
};

#endif
