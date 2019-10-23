//
//  main.cpp
//  Formula del chicharronero
//
//  Created by Jordy on 15/06/18.
//  Copyright © 2018 Jordy. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, binomio, x1, x2;
    cout << "\nProblema para la resolucion de ecuaciones cuadraticas por Formula General\n";
    cout <<"\nIngresa el valor del coheficiente cuadratico (a): \n";
    cin >> a;
    cout <<"\n Ingresa el valor del coheficiente lineal (b): \n";
    cin >> b;
    cout << "\n Ingresa el valor del termino independiente (c): \n";
    cin >> c;
    binomio = (b*b) - (4*a*c);
    
    if (binomio < 0)
    {
        cout << "\n No es posible calcular el resultado para los valores actuales";
    
    }
    else
    {
        x1 = ((b) * (-1) + sqrt (binomio)) / (2*a);
        x2 = ((b) * (-1) + sqrt (binomio)) / (2*a);
        cout <<"\n El valor de la raiz X1 es:  " <<x1;
        cout <<"\n El valor de la raiz X2 es:  " <<x2;
    }
    cout <<"\n \n Fin de programa \n \n";
    system("pause");
}
