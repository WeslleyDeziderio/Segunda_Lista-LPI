#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido{
    public:
        Pedido();
        Pedido(std::string descricao, int numero, int quantidade, double preco);
        virtual ~Pedido();
        std::string getDescricao();
        double getPreco;
        int getQuantidade();
        void setQuantidade(int quantidade);
        void print();
    protected:
        std::string descricao;
        int numero;
        int quantidade;
        double preco;
    private:
};

#endif // PEDIDO_H
