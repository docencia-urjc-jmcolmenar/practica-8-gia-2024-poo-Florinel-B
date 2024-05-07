//
// Created by florin on 7/05/24.
//

#ifndef PRACTICA_8_GIA_2024_POO_FLORINEL_B_RECURSO_H
#define PRACTICA_8_GIA_2024_POO_FLORINEL_B_RECURSO_H


class Recurso {
protected:

    short int longitud;
    std::string titulo;
    short int anyo;
    long int indentificador;
public:
    Recurso(std::string nombre, short anyolanza, long int indentificador1, short longitud);
//    Recurso(char *nombre, short anyolanza, long int indentificador1, short longitud): titulo(),anyo(anyonlanza),identificador(indentificador1);
    virtual double calcularCostePrestamo() = 0;

    std::string getTitulo();
};




#endif //PRACTICA_8_GIA_2024_POO_FLORINEL_B_RECURSO_H
