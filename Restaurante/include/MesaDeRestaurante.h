#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include "Pedido.h"

class MesaDeRestaurante{
    public:
        MesaDeRestaurante();
        virtual ~MesaDeRestaurante();
        void adicionaAoPedido(Pedido p);
        void zeraPedidos();
        double calculaTotal();
        void print();

    protected:
        int index;
        Pedido pedidos[10];
    private:
};

#endif // MESADERESTAURANTE_H
