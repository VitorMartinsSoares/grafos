# Grafos <h1>
## Resumo: <h2>
Um grafo é formado por vertices, que poderia ser objetos que se conectam formando arestas. Um exemplo de grafo seria os mapas, que ligam cidades (Vértices) através de rodovias (Arestas). Existe grafos orientados e não orientados, orientados é aquele em que a direção da aresta é especificada, os não orientados uma única aresta existe para duas direções. Grafos Simples não possuem laços nem arestas paralelas, isto é, uma aresta não sai de um vértice indo para ele mesmo (laço) e não existe arestas que tem os mesmos vértices. Exemplo: a----b a----b são arestas paralelas.
### Lista Adjacência: <h3>
Geralmente quando vai representar grafos em estruturas de dados se utiliza a lista de adjacência, sendo escolhida principalmente quando não existe arestas múltiplas. Neste código para a criação do struct da lista de adjacência, utiliza outras duas structs, a dos vertices e a das arestas, a struct das arestas é composta por dois vertices em que ela liga, ja a dos vertices é uma struct simples apenas com o valor.

```c
    typedef struct Aresta{
        Vertice vertice1;
        Vertice vertice2;
        char *valor;
    }Aresta;

    typedef struct ListaAdj{
        Vertice vertices[50];
        Aresta arestas[50];
    }ListaAdjL;
```
### Matriz Adjacência: <h3>
A Matriz de adjacência geralmente é mais efetiva quando deseja pesquisar muito a estrutura e é melhor para representar arestas múltiplas, já que a lista não é tão efetiva para isto, porém o seu gasto de memória é alto, então o seu uso é apenas quando necessário. Neste caso você apenas tem os vertices em linhas e em colunas, as arestas seriam o valor desta matriz nos indices da matriz dos vertices.
```c
    typedef struct MatrizAdj{
        int matrizVerticeXVertice[50][50];
        Vertice verticesColuna[50];
        Vertice verticesLinha[50];
    }Matrizadj;
```
### Matriz Incidência: <h3>
A matriz de incidência é bem menos comum que as outras estruturas, nesta os vertices são as linhas e as arestas as colunas, utilizado apenas quando os grafos são muito densos. No código ouve uma dúvida de como representar as arestas nesta matriz então representei apenas como uma struck simples com um valor em 'char', igual as vertices, ja a matriz sendo um valor de Vertice X Arestas.
```c
    typedef struct MatrizInc{
        int matrizVerticeXArestas[50][50];
        Vertice verticesLinha[50];
        ArestaIncidencia arestaColunas[50];
    }MatrizInc;
```