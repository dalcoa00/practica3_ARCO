#ifndef ASCII_H
#define ASCII_H
#include <QImage>


class ASCII
{
public:
    ASCII();
        QImage getImagen();
        void setImage();
        void transformImagen();
        void saveImagen();
private:
    QImage imagen;
    QImage imagenSalida;
};

#endif // ASCII_H
