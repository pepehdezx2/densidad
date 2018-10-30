//
//  main.cpp
//  estudiar2
//
//  Created by Jose Antonio on 05/03/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#include <iostream>
#include "Densidad.h"
using namespace std;
int main() {
    int cuantos;
    double ro, h, p;
    cout << "cuantas densidades quieres calcular" << endl;
    cin >> cuantos;
    Densidad arrd[cuantos];
    for (int i=0; i<cuantos; i++){
        cout << "dame la constante ro" << endl;
        cin >> ro;
        cout << "dame la altura del fluido" << endl;
        cin >> h;
        arrd[i].setRo(ro);
        arrd[i].setAltura(h);
    }
    for (int i=0; i<cuantos; i++){
        p=arrd[i].calcDensidad();
        ro=arrd[i].getRo();
        h=arrd[i].getAltura();
        cout << "el fluido con constante de " << ro << " y altura de " << h << " tiene una densidad de " << p << " pascales" << endl;
    }
}
