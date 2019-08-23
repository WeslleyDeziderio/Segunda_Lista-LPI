#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include <string>
#include <exception>

class ValorMuitoAcimaException : public std::exception{
    public:
        ValorMuitoAcimaException() throw();
        virtual ~ValorMuitoAcimaException() throw();
        virtual std::string what();

    protected:
        std::string errorMsg = "Atencao, valor muito acima do permitido";
    private:
};

#endif // VALORMUITOACIMAEXCEPTION_H
