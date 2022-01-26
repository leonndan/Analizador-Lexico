#include <iostream>
#include <cstdlib>
#include <string>

#include "lexico.h"

using namespace std;
int main()
{
    lexico lexico;


    lexico.entrada("8 3.5 4.8 int while c");
    cout << "Resultado del analisis lexico " << endl << endl;
    cout << "Simbolo\t\tTipo" << endl;
    while (lexico.simbolo.compare("$") != 0)
    {
        lexico.sigSimbolo();

        cout << lexico.simbolo << "\t\t" << lexico.tipoAcad(lexico.tipo) << endl;
    }
    cin.get();

    return 0;
}


