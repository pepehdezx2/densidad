//
//  Densidad.h
//  estudiar2
//
//  Created by Jose Antonio on 05/03/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#ifndef Densidad_h
#define Densidad_h
using namespace std;
class Densidad{
public:
    Densidad();
    Densidad(double p, double h);
    void setRo(double p);
    void setAltura(double h);
    double getRo();
    double getAltura();
    double calcDensidad();
private:
    double altura, ro;
};
Densidad::Densidad(){
    altura=0;
    ro=0;
}
Densidad::Densidad(double p, double h){
    ro=p;
    altura=h;
}
void Densidad::setRo(double p){
    ro=p;
}
void Densidad::setAltura(double h){
    altura=h;
}
double Densidad::getRo(){
    return ro;
}
double Densidad::getAltura(){
    return altura;
}
double Densidad::calcDensidad(){
    double dens;
    dens=9.81*ro*altura;
    return dens;
}

#endif /* Densidad_h */
