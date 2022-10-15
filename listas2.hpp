//#ifndef LISTAS_HPP_INCLUDED
//#define LISTAS_HPP_INCLUDED
#include <iostream>
using namespace std;

// La estructura de los datos se mantiene de la misma manera
struct Nodo{
    int dato;
    int cont = 0;
    Nodo* sig;
};

/*

int dato1 = 1;
int *punt;
punt = &dato1;

*/
// se pasa por referencia la dirección a donde
// apunta pila 
// DATO: pasar por referencia es trabajar con punteros que
// apuntan a una variable
void push(Nodo* &pila, Nodo* &upila ,  int valor){
    Nodo* nuevo = new Nodo;
    nuevo->dato = valor;
    nuevo->sig = pila;
    pila = nuevo;
    
    if (!upila){       // si el puntero al último es nullptr, cuando se
        upila = nuevo; // agrega un elemento será igual al puntero al primero
    }
    

    else{ // si hay más de un elemento en la lista entonces hay que recorrerla para encontrar el último
        
        for (int i = 0; i < pila->cont ; i++){
            upila = pila->sig;
            upila->cont = i;
        }

    }
}

void mostrar(Nodo* &pila , Nodo* &upila ){
    Nodo *aux = pila;
    for (int i = 0; i < upila->cont ; i++){
        cout << aux->dato << endl;
        aux = aux->sig;
    }


}

/*
int pop (){

}

void agregar (){

}
*/