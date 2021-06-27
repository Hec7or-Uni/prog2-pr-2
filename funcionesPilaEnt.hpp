// Fichero de interfaz funcionesPilaEnt.hpp del módulo de biblioteca funcionesPilaEnt
# pragma once

# include <iostream>
# include <iomanip>

// Tipo PilaEnt y operaciones básicas para el trabajo con pilas de datos
# include "../funciones/pilaEnt.hpp"


// * Notación empleada en las especificaciones:
// p = []  La pila p está vacá­a, es decir, almacena 0 datos
// p = [D_1, D_2, ..., D_K] la pila p almacena K datos. El más antiguo
//     es el dato D_1, el segundo más antiguo el dato D_2, etc., etc.,
//     y el más reciente es el dato D_K

// * Pre:  p = [D_1, D_2, ..., D_K] AND K >= 0
// * Post: p = [D_1, D_2, ..., D_K] AND numDatos(p) = K
int numDatos(PilaEnt &p);


// Pre:  p = [D_1, D_2, ..., D_K]  AND K >= 0 AND anchura >= 1
// Post: p = [D_1, D_2, ..., D_K] y presenta por pantalla un listado de
//       los datos apilados en la pila comenzando por la cima, D_K, y acabando
//       por el del fondo de la pila, D_1. Cada dato lo escribe en una lá­nea,
//       empleando anchura caracteres y alineado a la derecha. Cada dato es
//       precedido por el carácter '|' y es seguido por los caracteres ' ' y
//       '|', tal como se  ilustra a continuación. Tras el último dato se
//       presenta una linea de la forma "+--...--+", seguida por una lá­nea
//       en blanco:
//
//        |     D_K |
//        |     ... |
//        |     D_2 |
//        |     D_1 |
//        +---------+
void mostrar(PilaEnt &p, const int anchura=3);

// Pre:  p = [D_1, D_2, ..., D_K] AND K >= 0 AND anchura >= 1
// Post: p = [D_1, D_2, ..., D_K] y presenta por pantalla un listado de los
//       datos apilados en la pila comenzando por el del fondo de la pila, D_1,
//       y acabando por el de la cima de la pila, D_1. Cada dato lo escribe
//       en una lá­nea, empleando anchura caracteres y alineado a la derecha.
//       Cada dato es precedido por el carácter '|' y es seguido por los
//       caracteres ' ' y '|', tal como se  ilustra a continuación. Antes
//       del primer dato se presenta una linea de la forma "+--...--+":
//
//        +---------+
//        |     D_1 |
//        |     D_2 |
//        |     ... |
//        |     D_K |
void mostrarInvertida(PilaEnt &p, const int anchura=3);

// * Pre:  p = [D_1, D_2, ..., D_K] AND K >= 0
// * Post: p = [D_2, ..., D_K]
void eliminarFondo(PilaEnt &p);

// * Pre:  p = [D_K, ..., D_(i+1), D_i, D_(i-1), ..., D_1] AND
// *       K >= 0 AND i >= 1 AND i <= K
// * Post: p = [D_K, ..., D_(i+1), D_(i-1), ..., D_1]
void eliminar(PilaEnt &p, const int i);

// * Pre:  p = [D_1, D_2, ..., D_K] AND K >= 0
// * Post: p = [nuevo, D_1, D_2, ..., D_K]
void insertarEnFondo(PilaEnt &pila, const int nuevo);
