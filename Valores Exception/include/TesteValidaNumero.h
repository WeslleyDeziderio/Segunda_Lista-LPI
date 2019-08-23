#ifndef TESTEVALIDANUMERO_H
#define TESTEVALIDANUMERO_H

#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

class TesteValidaNumero{
    public:
        TesteValidaNumero();
        virtual ~TesteValidaNumero();
        void validaNumero(int numero);
    protected:

    private:
};

#endif // TESTEVALIDANUMERO_H
