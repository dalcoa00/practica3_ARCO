#include "factorial.h"
#include "mainwindow.h"

Factorial::Factorial() {

}

int Factorial::getNum() {
    return numero;
}

void Factorial::setNum() {
    /* Crea un archivo de texto que contenga el número del que se calculará el factorial */

    ofstream escribe("numero.txt");
    escribe<<"463783425"; /* Provisional, el archivo ya debe ir en el ejecutable con el número */

    /* Lee el archivo de texto con el número */
    ifstream lee("numero.txt");
    getline(lee, num);
    lee.close();

    Factorial::numero = stoi(num);

}

void Factorial::calculaFactorial() {

    /* Calcula el factorial del número */
    int numero = this->getNum();
    int factorial = 1;

    for (int i = 1; i <= numero; i++) {

        factorial = factorial * i;
    }

    /* Una vez calculado, escribe el resultado en el mismo documento de texto*/
    ofstream archivo("numero.txt");
    archivo<<factor<<"\nEl factorial de "<<numero<<" es "<<factorial<<endl;
}
