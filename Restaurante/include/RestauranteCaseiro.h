#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"

class RestauranteCaseiro{
    public:
        RestauranteCaseiro();
        virtual ~RestauranteCaseiro();
        void adicionaAoPedido(int Imesa, Pedido d);
        double calculaTotalRestaurante();
        void print();
    protected:
        MesaDeRestaurante mesas[20];
    private:
};

#endif // RESTAURANTECASEIRO_H
