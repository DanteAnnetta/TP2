#include <iostream>
#include "listas2.hpp"

using namespace std;

int main(){
    Nodo* pila = nullptr;
    Nodo* upila = nullptr;
// el primer parámetro que recibe es un puntero que empieza vacío
// de modo que se le va asignando la dirección del nuevo nodo que se crea para hacer el encadenamiento
    push(pila , upila , 1);
    push(pila , upila , 2);
    push(pila , upila , 3);
    push(pila , upila , 4);
    push(pila , upila , 5);
    mostrar(pila , upila);

   // cout << pila->dato << endl;   // imprime un 5
   // cout << upila->dato << endl;  // imprime un 1
    return 0;
}