#include "ValorMuitoAcimaException.h"

ValorMuitoAcimaException::ValorMuitoAcimaException() throw(){
    //ctor
}

ValorMuitoAcimaException::~ValorMuitoAcimaException() throw(){
    //dtor
}

std::string ValorMuitoAcimaException::what(){
    return errorMsg;
}
