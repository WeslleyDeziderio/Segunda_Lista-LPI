#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <exception>
#include <string>

class SaldoNaoDisponivelException : public std::exception{
    public:
        SaldoNaoDisponivelException() throw();
        virtual ~SaldoNaoDisponivelException() throw();
        void saldoIndisponivel();
        virtual std::string what();
    protected:
        std::string errorMsg = "Saldo Indisponivel.";
};

#endif // SALDONAODISPONIVELEXCEPTION_H
