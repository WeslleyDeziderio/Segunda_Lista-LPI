#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

#define PI 3.14159

class Circulo : public FiguraGeometrica{
    public:
        Circulo();
        virtual ~Circulo();
        double calcularArea(double raio);

};

#endif
