//
// Created by florin on 7/05/24.
//

#include <iostream>
#include "Recurso.h"
Recurso::Recurso(std::string nombre, short int anyolanza, long int indentificador1,int short longitud) {
    this->longitud = longitud;
    indentificador = indentificador1;
    anyo = anyolanza;
    titulo = nombre;

}

std::string Recurso::getTitulo() {
    return this->titulo;
}
