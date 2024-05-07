//
// Created by florin on 7/05/24.
//

#ifndef PRACTICA_8_GIA_2024_POO_FLORINEL_B_PELICULA_H
#define PRACTICA_8_GIA_2024_POO_FLORINEL_B_PELICULA_H


#include "Recurso.h"
#define PRECIO 0.10
class Pelicula : public Recurso{
public :
    Pelicula(std::string nombre, short anyolanza, long int indentificador1, short longitud) : Recurso(titulo,anyo,indentificador,longitud){};

    double calcularCostePrestamo() override{
        return longitud*PRECIO;
    };
};


#endif //PRACTICA_8_GIA_2024_POO_FLORINEL_B_PELICULA_H
