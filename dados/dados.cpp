//  A01381334 Jose Antonio Hernández Hernández
//  main.cpp
//  dados
//  Algoritmo
//  Declara un arreglo de tamaño 200
//  Declara las variables que contaran el numero de veces que suman los dados dicha cifra y se inicializan en 0
//  Se pone el codigo de un algoritmo que inicializa en el tiempo transcurrido desde 1970 hasta ahora en segundos para generar numeros "aleatorios"
//  Ciclo for con repeticion de 200 veces para simular lanzar un dado el cual es guardado en el arreglo de tamaño 200 espacio por espacio con un generador que va de 2 hasta doce
//  Ciclo for con repeticion de 200 que va sumando a las variables ya inicializadas en 0 la cantidad de veces que se repite dicho numero en el arreglo, va comparando con un switch
//  Se despliegan "numero  |" para simular grafica y se hace un contador for de 0 hasta el numero de veces que se repitio el dato y va poniendo un * cada vez hasta que termna el ciclo
//  Se hace comparacion de numero menor y mayor que al final se despliegan como letrero
//  Created by Jose Antonio on 11/01/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    // declaracion de variables...
    int num[200];
    int dos, tres, cuatro, cinco, seis, siete, ocho, nueve, diez, once, doce, mayor, menor;
    dos=0;
    tres=0;
    cuatro=0;
    cinco=0;
    seis=0;
    siete=0;
    ocho=0;
    nueve=0;
    diez=0;
    once=0;
    doce=0;
    srand(time(0));
    // ciclo for que simulara lanzar un dado 200 veces...
    for (int i=0; i<200; i++){
        num[i]=2+(rand()%11); // funcion que recibe el arreglo de caso aleatorios de la suma de dos dados
    }
    // ciclo que va contando la cantidad de repeticiones que tiene cada combinacion posible...
    for (int i=0; i<200; i++){
        switch (num[i]){ // condicional que decide cual fue la combinacion y la suma
            case 2: dos++;
                break;
            case 3: tres++;
                break;
            case 4: cuatro++;
                break;
            case 5: cinco++;
                break;
            case 6: seis++;
                break;
            case 7: siete++;
                break;
            case 8: ocho++;
                break;
            case 9: nueve++;
                break;
            case 10: diez++;
                break;
            case 11: once++;
                break;
            case 12: doce++;
                break;
        }
    }
    // funcion que trata de simular un histograma
    cout << "2  |";
    for (int i=0; i<dos; i++){ // ciclo que va de 0 a repeticiones del numero que muestra esa cantidad de *
        cout << "*";
    }
    cout << endl;
    cout << "3  |";
    for (int i=0; i<tres; i++){
        cout << "*";
    }
    cout << endl;
    cout << "4  |";
    for (int i=0; i<cuatro; i++){
        cout << "*";
    }
    cout << endl;
    cout << "5  |";
    for (int i=0; i<cinco; i++){
        cout << "*";
    }
    cout << endl;
    cout << "6  |";
    for (int i=0; i<seis; i++){
        cout << "*";
    }
    cout << endl;
    cout << "7  |";
    for (int i=0; i<siete; i++){
        cout << "*";
    }
    cout << endl;
    cout << "8  |";
    for (int i=0; i<ocho; i++){
        cout << "*";
    }
    cout << endl;
    cout << "9  |";
    for (int i=0; i<nueve; i++){
        cout << "*";
    }
    cout << endl;
    cout << "10 |";
    for (int i=0; i<diez; i++){
        cout << "*";
    }
    cout << endl;
    cout << "11 |";
    for (int i=0; i<once; i++){
        cout << "*";
    }
    cout << endl;
    cout << "12 |";
    for (int i=0; i<doce; i++){
        cout << "*";
    }
    cout << endl;
    // funcion que calcula la mayor posibilidad...
    if (doce>once && doce>diez && doce>nueve && doce>ocho && doce>siete && doce>seis && doce>cinco && doce>cuatro && doce>tres && doce>dos){
        mayor = 12;
    }
    if (once>doce && once>diez && once>nueve && once>ocho && once>siete && once>seis && once>cinco && once>cuatro && once>tres && once>dos){
        mayor = 11;
    }
    if (diez>once && diez>doce && diez>nueve && diez>ocho && diez>siete && diez>seis && diez>cinco && diez>cuatro && diez>tres && diez>dos){
        mayor = 10;
    }
    if (nueve>once && nueve>diez && nueve>doce && nueve>ocho && nueve>siete && nueve>seis && nueve>cinco && nueve>cuatro && nueve>tres && nueve>dos){
        mayor = 9;
    }
    if (ocho>once && ocho>diez && ocho>nueve && ocho>doce && ocho>siete && ocho>seis && ocho>cinco && ocho>cuatro && ocho>tres && ocho>dos){
        mayor = 8;
    }
    if (siete>once && siete>diez && siete>nueve && siete>ocho && siete>doce && siete>seis && siete>cinco && siete>cuatro && siete>tres && siete>dos){
        mayor = 7;
    }
    if (seis>once && seis>diez && seis>nueve && seis>ocho && seis>siete && seis>doce && seis>cinco && seis>cuatro && seis>tres && seis>dos){
        mayor = 6;
    }
    if (cinco>once && cinco>diez && cinco>nueve && cinco>ocho && cinco>siete && cinco>seis && cinco>doce && cinco>cuatro && cinco>tres && cinco>dos){
        mayor = 5;
    }
    if (cuatro>once && cuatro>diez && cuatro>nueve && cuatro>ocho && cuatro>siete && cuatro>seis && cuatro>cinco && cuatro>doce && cuatro>tres && cuatro>dos){
        mayor = 4;
    }
    if (tres>once && tres>diez && tres>nueve && tres>ocho && tres>siete && tres>seis && tres>cinco && tres>cuatro && tres>doce && tres>dos){
        mayor = 3;
    }
    if (dos>once && dos>diez && dos>nueve && dos>ocho && dos>siete && dos>seis && dos>cinco && dos>cuatro && dos>tres && dos>doce){
        mayor = 2;
    }
    // funcion que calcula la menor posibilidad...
    if (doce<once && doce<diez && doce<nueve && doce<ocho && doce<siete && doce<seis && doce<cinco && doce<cuatro && doce<tres && doce<dos){
        menor = 12;
    }
    if (once<doce && once<diez && once<nueve && once<ocho && once<siete && once<seis && once<cinco && once<cuatro && once<tres && once<dos){
        menor = 11;
    }
    if (diez<once && diez<doce && diez<nueve && diez<ocho && diez<siete && diez<seis && diez<cinco && diez<cuatro && diez<tres && diez<dos){
        menor = 10;
    }
    if (nueve<once && nueve<diez && nueve<doce && nueve<ocho && nueve<siete && nueve<seis && nueve<cinco && nueve<cuatro && nueve<tres && nueve<dos){
        menor = 9;
    }
    if (ocho<once && ocho<diez && ocho<nueve && ocho<doce && ocho<siete && ocho<seis && ocho<cinco && ocho<cuatro && ocho<tres && ocho<dos){
        menor = 8;
    }
    if (siete<once && siete<diez && siete<nueve && siete<ocho && siete<doce && siete<seis && siete<cinco && siete<cuatro && siete<tres && siete<dos){
        menor = 7;
    }
    if (seis<once && seis<diez && seis<nueve && seis<ocho && seis<siete && seis<doce && seis<cinco && seis<cuatro && seis<tres && seis<dos){
        menor = 6;
    }
    if (cinco<once && cinco<diez && cinco<nueve && cinco<ocho && cinco<siete && cinco<seis && cinco<doce && cinco<cuatro && cinco<tres && cinco<dos){
        menor = 5;
    }
    if (cuatro<once && cuatro<diez && cuatro<nueve && cuatro<ocho && cuatro<siete && cuatro<seis && cuatro<cinco && cuatro<doce && cuatro<tres && cuatro<dos){
        menor = 4;
    }
    if (tres<once && tres<diez && tres<nueve && tres<ocho && tres<siete && tres<seis && tres<cinco && tres<cuatro && tres<doce && tres<dos){
        menor = 3;
    }
    if (dos<once && dos<diez && dos<nueve && dos<ocho && dos<siete && dos<seis && dos<cinco && dos<cuatro && dos<tres && dos<doce){
        menor = 2;
    }
    // letreros que muestran la mayor y menor probabilidad de combinaciones en tal simulacion...
    cout << "hay mas probabilidad que sumen " << mayor << endl;
    cout << "hay menos probabilidad que sumen " << menor << endl;
    return 0;
}
