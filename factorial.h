#ifndef FACTORIAL_H
#define FACTORIAL_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <mainwindow.h>
//#include <ui_mainwindow.h> /* Aún no se ha creado */

using namespace std;

class Factorial
{
private:
    string num, factor;
    int numero, factorial;


public: //Métodos
    Factorial();
    int getNum();
    void setNum();
    void calculaFactorial();

};

#endif // FACTORIAL_H
