/* arquivo: main.c
  * autores: Francisco Miranda e Hiago Vinicius Americo
*/

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "embrulho.h"
#include "primitivas.h"
#include "graham.h"
#include "tempo.h"

/* 
  @main: lê os pontos em cordenadas x,y da entrada padrão, armazena 
  em uma lista ligada simples e calcula o poligono convexo
*/

int main()
{
/*
   sentido: anti-horario ou horario
   pnt: numero de pontos
   posx, posy: coordenadas (x,y) de um ponto
   inic: ponto que a impressao é iniciada (L, R, D ou U)
   * l: endereço do primeiro nó da lista ligada que armazena as coordenadas dos pontos    
*/

    int sentido,pnt=0;
    double posx,posy;
    char inic;
    LISTA * l;

// inicializacao da lista ligada
    l = lista_criar();

// leitura do numero de pontos da stdin
    scanf("%d", &pnt);
    
// inserção dos pontos na lista
    for(int i = 0; i < pnt; ++i)
    {
        scanf("%lf %lf", &posx, &posy);
        lista_inserir(l,posx,posy);
    }

// ponto que a impressao é iniciada
    scanf("%c", &inic);
    scanf("%d", &sentido);
    
// chamada da função

    printf("leu os dados\n");

    double startW, endW, startG,endG;
    LISTA * m, *n;
    double mediaG = 0, mediaW = 0;

    for(int k = 0; k<5; ++k)
    {

    
    //startW = seconds();
    //m = embrulho(l);
    //endW = seconds() - startW;
    

    startG = seconds();
    n = pilhatolist(graham(l));
    endG = seconds() - startG;
    

    //printf("Wrap: \n");
    //printf("%lf\n", endW);
    //lista_imprimir(m);
    //imprime_fecho(n, inic, sentido);
    printf("Graham: \n");
    printf("%lf\n", endG);
    //lista_imprimir(n);
    //imprime_fecho(m, inic, sentido);
    //mediaW = mediaW + endW;
    mediaG = mediaG + endG;
    }

    printf("\n\n");

    //printf("Media Wrap: \n");
    //printf("%lf\n", mediaW/10);

    printf("Media Graham: \n");
    printf("%lf\n", mediaG/5);



// desalocação da lista para encerrar a aplicação
    lista_apagar(&l);
    lista_apagar(&m);
    lista_apagar(&n);
    
    return 0;
}