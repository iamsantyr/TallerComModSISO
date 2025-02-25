/****************************************
* Fecha: 18 de Febrero 2025
* Autor: David Santiago Rodriguez Prieto
* Materia: Sistemas Operativos
* Tema: Memoria dinamica y operacion de multiplicacion de matrices, complejidad, creacion de benchmark, programacion modular y autom>**********************************************/

#ifndef __MODULO_H__
#define __MODULO_H__

void impMatriz(int *matriz, int S);
void inicializar_matriz(int *Ma,int *Mb, int s);
void multiplicar_Matriz(int *Ma,int *Mb,int *Mc,int s);
void vectorInicio(vectorDinamico *V);
int totalVector(vectorDinamico *V);
static void resizeVector(vectorDinamico *V, int capacidad);
void addVector(vectorDinamico *V, void *elemento);
void freeVector(vectorDinamico *V);
void *getVector(vectorDinamico *V, int indice);
void setVector(vectorDinamico *V, int indice, void *elemento);
void borrarVector(vectorDinamico *V, int indice);

#endif