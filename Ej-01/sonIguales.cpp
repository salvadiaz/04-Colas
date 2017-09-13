//
// Created by alumno on 13/09/17.
//

#include "sonIguales.h"

//Diseñe un programa que sea capaz de leer dos colas y mediante un mensaje indicar si son
//iguales. Nota: los elementos constitutivos de las colas son caracteres.

template <class T>
bool sonIguales(Cola<T> A, Cola<T> B){
    if (A.esVacia() && B.esVacia())
        return true;
    if (A.desencolar() == B.desencolar()){
        sonIguales(A, B);
    }else {
        return false;
    }
}
