#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

int main(void){
    Triangulo *triangulo1 = new Triangulo();
    Quadrado *quadrado1  = new Quadrado();
    Circulo *circulo1 = new Circulo();

    std::cout << "A area do triangulo eh: " << triangulo1->calcularArea(10, 10) << std::endl;
    std::cout << "A area do quadrado eh: " << quadrado1->calcularArea(50) << std::endl;
    std::cout << "A area do circulo eh: " << circulo1->calcularArea(2.71) << std::endl;

    delete triangulo1;
    delete quadrado1;
    delete circulo1;

    return 0;
}
