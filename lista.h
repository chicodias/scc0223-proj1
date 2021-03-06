/* 
 * File:   lista.h
 * Author: Francisco Rosa Dias de Miranda e Hiago Vinicius Americo
  (baseado no arquivo lista.h de Eliane Gniech Karasawa)
 */

#ifndef LISTA_H
#define LISTA_H

#define boolean int /*Define tipo booleano*/
#define TRUE 1
#define FALSE 0
#define ERRO -32000

typedef struct pon NO; /*Tipo ITEM da lista*/

// lista ligada que armazena os pontos da entrada
struct pon {
    double x;
    double y;
    NO * prox;
};

// cabeça da lista
struct lista
    {
    NO *inicio; 
    int n;
    };

typedef struct lista LISTA;

NO * criaNo(double x, double y); // aloca um NO no heap e retorna seu endereço
LISTA *lista_criar(void); /*Criacao da lista e retorno do seu ponteiro*/
boolean lista_apagar(LISTA **l); /*Apaga todo o conteudo da lista e libera o bloco de memoria*/
void lista_imprimir(LISTA *l); /*Imprime os elementos armazenados na lista*/
void lista_inverter(NO ** L); // inverte a ordem dos elementos de uma lista
void lista_inserir(LISTA *l, double x, double y); /*Insere o PONTO ordenadamente por y*/

void imprime_fecho(LISTA * l, char inic, int sentido); //imprime um fecho convexo na saida padrao
NO * find(LISTA * l, char coord, int high); // funcao auxiliar para impressao

// funcoes para encontrar um dado elemento maximal de L
NO * findLowestY(LISTA * L);
NO * findLowestX(LISTA * L);
NO * findHighestX(LISTA * L);
NO * findHighestY(LISTA * L);

#endif /* LISTA_H */
