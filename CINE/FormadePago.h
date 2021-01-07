#ifndef FORMADEPAGO_H
#define FORMADEPAGO_H
#include <iostream>
using namespace std;

class FormadePago
{
    public:
        FormadePago();
        void Menu(int total);
        int descuento(int total);
        int calcularprecio(int total);
};

#endif // FORMADEPAGO_H
