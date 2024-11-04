#ifndef PARTIDO_H_INCLUDED
#define PARTIDO_H_INCLUDED

#include "competencia.h"
#include <iostream>
#include <string>

using namespace std;

class Partido : public Competencia {
private:
    string equipo1;
    string equipo2;
    int* goles;
    int fecha;

public:
    Partido();

    string getEquipo1();
    string getEquipo2();
    int getGoles(int i);
    int getFecha() const;

    void setEquipo1(string& valor);
    void setEquipo2(string& valor);
    void setGoles(int valor, int i);
    void setFecha(int valor);

    void mostrarPartido() const;
};

#endif
