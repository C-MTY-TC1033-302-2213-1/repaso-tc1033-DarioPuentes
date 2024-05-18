//
// main.cpp
// ComposicionTriangulo
// Created by Ma.Guadalupe Roque Díaz de León on 18/11/21

#include <iostream>
#include "Triangulo.hpp"
#include "Punto.hpp"

using namespace std;
// Desplegar el contenido del arreglo
void desplegarArregloTriangulo(Triangulo arrTriangulos[], int iS){

    for (int indice = 0; indice < iS; indice++){
        cout << indice << "." << arrTriangulos[indice].str() << endl;
    }
}

void leerArregloTriangulos(Triangulo arrTriangulos[], int iS){
    double x1, y1, x2, y2, x3, y3;
    Punto pto;

    for (int indice = 0; indice < iS; indice++){
        cout << "Ingresa las 3 coordenadas x, y de los vertices del Triangulo" << indice << ':';
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        pto.setX(x1);
        pto.setY(y1);

        cout << pto.str() << endl;
        arrTriangulos[indice].setVertice1(pto);

        cout << pto.str() << endl;

        pto.setX(x2);
        pto.setX(y2);
        arrTriangulos[indice].setVertice2(pto);

        pto.setX(x3);
        pto.setX(y3);
        arrTriangulos[indice].setVertice3(pto);
    }
}

void calcularPerimetroArea(Triangulo arrTriangulos[], int iS){
    for(int indice = 0; indice < iS; indice++){
        cout << "Triangulo" << indice << ".\nPerimetro =" << arrTriangulos[indice].perimetro() << ".\nArea =" << arrTriangulos[indice].area() << endl;
    }
}

int main(){

    Punto p1{-5, -5}, p2{1, 3}, p3{4, -6};
    Punto p4{-2, -3}, p5{5, -4}, p6{-1, 3};
    Punto p7{-2, -3}, p8{5, -4}, p9{-1, 3};
    Triangulo tr1{p4,p5,p6}, tr2{p1,p2,p3}, tr3{p7,p8,p9};
    string nombre;
    int edad;

    Triangulo arrT[100];

    desplegarArregloTriangulo(arrT, 100);
    leerArregloTriangulos(arrT,2);
    desplegarArregloTriangulo(arrT, 5);
    calcularPerimetroArea(arrT, 5);

    for (int alumnos = 1; alumnos < 4; alumnos++){
        cout << "ingresa tu nombre:";
        getline(cin, nombre);
        cout << nombre << endl;
        cout << "ingresa tu edad:";
        cin >> edad;
        cin.ignore();

    }

    return 0;
}