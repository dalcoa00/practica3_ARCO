#include "ASCII.h"
#include <QImage>

ASCII::ASCII(){

}

QImage ASCII::getImage(){
   return this.imagen;
}

void ASCII::setImage(){
   imagen.load("imajen_a_transformar.png");
}

void ASCII::transformImage(){
    setImage();
    inRange(imagen, Scalar(0,0,0), Scalar(0,0,255), imagenSalida);
    saveImagen(imagenSalida);
}

void ASCII::saveImagen(QImage imagen){
    imagen.save(fileName);
}

