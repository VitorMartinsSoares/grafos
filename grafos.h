#ifndef GRAFOS_H
#define GRAFOS_H
#include <stdbool.h>
typedef struct ListaAdj{
    Vertice vertices[50];
    Aresta arestas[50];
}ListaAdjL;

typedef struct MatrizAdj{
    bool matrizVerticeXVertice[50][50];
    Vertice verticesColuna[50];
    Vertice verticesLinha[50];
}Matrizadj;

typedef struct MatrizInc{
    int matrizVerticeXArestas[50][50];
    Vertice verticesLinha[50];
    ArestaIncidencia arestaColunas[50];
}MatrizInc;

typedef struct Aresta{
    Vertice vertice1;
    Vertice vertice2;
    char *valor;
}Aresta;

typedef struct ArestaIncidencia{
    char *valor;
}ArestaIncidencia;

typedef struct Vertice{
    char *valor;
}Vertice;

#endif