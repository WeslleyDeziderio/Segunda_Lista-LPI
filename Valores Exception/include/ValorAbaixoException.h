#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <string>
#include <exception>

class ValorAbaixoException : public std::exception{
    public:
        ValorAbaixoException() throw();
        virtual ~ValorAbaixoException() throw();
        virtual std::string what();

    protected:
        std::string errorMsg = "Atencao, valor abaixo do permitido";
    private:
};

#endif // VALORABAIXOEXCEPTION_H
