#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>

class FiguraGeometrica{
    public:
        double calcularArea();
        FiguraGeometrica();
        virtual ~FiguraGeometrica();

    protected:
        std::string nome;
};

#endif
