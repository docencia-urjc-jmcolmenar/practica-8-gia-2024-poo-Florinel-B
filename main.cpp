#include <iostream>
#include "Recurso.h"
#include "Libro.h"
#include "Pelicula.h"

int const MAX_RECURSOS = 4;

int main() {

    // Declaración de array polimórfico de recursos:
    Recurso *recursos[MAX_RECURSOS];
    // Inclusión de elementos:
    int numRecursos = 0;
    recursos[numRecursos++] = new Libro( "jenafjanef", 1954, 123123, 1000);
    recursos[numRecursos++] = new Pelicula("Inception", 2010, 54678, 148);
    // Cálculo de coste de préstamos:
    for (int i = 0; i < numRecursos; i++) {
        std::cout << "Coste de préstamo de \"" << recursos[i]->getTitulo() << "\": " << recursos[i]->calcularCostePrestamo() << std::endl;
    }
    return 0;
}
