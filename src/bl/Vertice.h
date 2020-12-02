//
// Created by Mario Martinez on 23/11/20.
//

#ifndef VERTICE_H
#define VERTICE_H

#include <string>
class Arista;

#include "Arista.h"


using namespace std;

class Vertice {
public:
//    Vertice(const string &nombre);

//    Vertice(int indice, const string &nombre, Vertice *sig = nullptr, Arista *ady = nullptr);

    Vertice(int indice, const string &nombre, Vertice *next = nullptr,
            Arista *ady = nullptr, Arista *precedente = nullptr);

    virtual ~Vertice();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    Vertice *getNext() const;

    void setNext(Vertice *next);

    Arista *getAdy() const;

    void setAdy(Arista *ady);

    int getIndice() const;

    void setIndice(int indice);

    Arista *getPrecedente() const;

    void setPrecedente(Arista *precedente);

private:
    int indice; // para ordenar lo vértices en forma ascendente
    string nombre;
    Vertice *next;
    Arista *ady;
    Arista *precedente;
};


#endif //GRAFO_ENLACE_MULTIPLE_VERTICE_H
