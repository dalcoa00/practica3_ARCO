#include "ASCII.h"
#include <QImage>

ASCII::ASCII(){

}

QImage ASCII::getImage(){
   return this.imagen;
}

void ASCII::setImage(){
   this.imagen.load("imajen_a_transformar.png");
}

void ASCII::transformImage(){
    setImage();
    inRange(this.imagen, Scalar(0,0,0), Scalar(0,0,255), this.imagenSalida);
    this.imagenSalida.save(fileName);
}

ASCII::~ASCII(){

}

