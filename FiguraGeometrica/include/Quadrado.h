#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica{
    public:
        Quadrado();
        virtual ~Quadrado();
        double calcularArea(double lado);
};

#endif
