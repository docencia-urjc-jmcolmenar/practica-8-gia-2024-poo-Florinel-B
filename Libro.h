//
// Created by florin on 7/05/24.
//

#ifndef PRACTICA_8_GIA_2024_POO_FLORINEL_B_LIBRO_H
#define PRACTICA_8_GIA_2024_POO_FLORINEL_B_LIBRO_H


#include "Recurso.h"
#define PRECIO 0.05
class Libro : public Recurso{
public :
    Libro(std::string nombre, short anyolanza, long int indentificador1, short longitud) : Recurso(titulo,anyo,indentificador,longitud){};

    double calcularCostePrestamo() override{
        return longitud*PRECIO;
    };
};



#endif //PRACTICA_8_GIA_2024_POO_FLORINEL_B_LIBRO_H
