// Programa pruebas01.cpp de pruebas del comportamiento de las funciones
// definidas en el módulo calculos

# include <iostream>
# include "calculos.hpp"

using namespace std;


// Pre:  <cifra> es el numero de cifras de <n> cuando se escribe en base <b>
//       y <b> está comprendido entre 2 y 10
// Post: Informa si el valor devuelto al ejecutar numCifras(n, b) es igual
//       a <cifras> o no lo es
void probarNumCifras(const int n, const int b, const int cifras) {
    int r = numCifras(n, b);
    if (r == cifras) {
        cout << "Ok. numCifras(" << n << "," << b << ") = " << r << endl;
    } else {
        cout << "Mal. numCifras(" << n << "," << b << ") = " << r << "  pero debiera ser "
             << cifras << endl;
    }
}


// Prueba el comportamiento de numCifras(n,10) para los siguientes valores de n:
// 0, 1, 9, 10, 99, 100, 999, 1000, ... , 99999, 100000, 99999 y 1000000
// y prueba el comportamiento de numCifras(n,2) para los siguientes valores de n:
// 0, 1, 1, 2, 3, 4, 7, 8, 15, 16, 31, 32, ..., 4095, 4096, 8191 y 8192
void probarNumCifras() {
    // Prueba el comportamiento de numCifras(n) para los siguientes valores de n:
    // 0, 1, 9, 10, 99, 100, 999, 1000, ..., 99999, 100000, 99999 y 1000000
    probarNumCifras(0, 10, 1);
    probarNumCifras(1, 10, 1);
    int n = 10;
    int cifras = 2;
    while (n <= 1000000) {
        probarNumCifras(n - 1, 10, cifras-1);
        probarNumCifras(n, 10, cifras);
        n = 10 * n;
        cifras = cifras + 1;
    }
    cout << endl;
    // Prueba el comportamiento de numCifras(n,2) para los siguientes valores de n:
    // 0, 1, 1, 2, 3, 4, 7, 8, 15, 16, 31, 32, ..., 4095, 4096, 8191 y 8192
    probarNumCifras(0, 2, 1);
    probarNumCifras(1, 2, 1);
    n = 2;
    cifras = 2;
    while (n <= 10000) {
        probarNumCifras(n - 1, 2, cifras-1);
        probarNumCifras(n, 2, cifras);
        n = 2 * n;
        cifras = cifras + 1;
    }
    cout << endl;
}


// Pre:  <n> es el numero natural y <b> esta comprendido entre 2 y 10
// Post: Informa si los valores devueltos al ejecutar cifra(n, i, b) corresponden
//       o no a la i-esima cifra de <n>, cuando este numero se escribe en base <b>
void probarCifra(const int n, const int b) {
}


// Prueba el comportamiento de cifra(n,i,b) para diferentes numeros naturales
// en las bases de numeracion 2 y 10
void probarCifra() {
}


// Pre:  <n> es el numero natural y <b> esta comprendido entre 2 y 10 y <laMayor> es
//       el valor de la mayor de las cifras de <n> cuando se escribe en base <b>
// Post: Informa si el valor devuelto al ejecutar cifraMayor(n, b) coincide con el
//       de <laMyor>, cuando <n> se escribe en base <b>
void probarCifraMayor(const int n, const int b, const int laMayor) {
}


// Prueba el comportamiento de cifraMayor(n,b) para diferentes numeros naturales
// en las bases de numeracion 2, 8 y 10
void probarCifraMayor() {
}


// Pre:  <n> es el numero natural y <b> esta comprendido entre 2 y 10 y <laMasSignificativa>
//       es el valor de cifra mas significativa de <n> cuando se escribe en base <b>
// Post: Informa si el valor devuelto al ejecutar cifraMasSignificativa(n, b) coincide
//       con el de <laMasSignificativa>, cuando <n> se escribe en base <b>
void probarCifraMasSignificativa(const int n, const int b, const int laMasSignificativa) {
}


// Prueba el comportamiento de cifraMasSignificativa(n,b) para diferentes numeros naturales
// en las bases de numeracion 2, 8 y 10
void probarCifraMasSignificativa() {
}


// Pre:  <n> es el numero natural y <b> esta comprendido entre 2 y 10 y <laSuma> es
//       el valor de las cifras de <n> cuando se escribe en base <b>
// Post: Informa si el valor devuelto al ejecutar sumaCifras(n, b) coincide
//       con el de <laSuma>, cuando <n> se escribe en base <b>
void probarSumaCifras(const int n, const int b, const int laSuma) {
}


// Prueba el comportamiento de probarSumaCifras(n,b) para diferentes numeros naturales
// en las bases de numeracion 2, 8 y 10
void probarSumaCifras() {
}


// Ejecuta una secuencia de pruebas de las funciones definidas
// en el modulo calculos
int main() {
    // Pruebas del comportamiento de numCifras(n,b)
    probarNumCifras ();
    // Pruebas del comportamiento de cifra(n,i,)
	probarCifra();
    // Pruebas del comportamiento de cifraMayor(n,b)
	probarCifraMayor();
    // Pruebas del comportamiento de cifraMasSignificativa(n,b)
	probarCifraMasSignificativa();
    // Pruebas del comportamiento de sumaCifras(n,b)
	probarSumaCifras();
    // Fin del programa de pruebas
    return 0;
}