#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    long matricula;
    float n1, n2, media;
    struct no *proximo;
}No;

void inserir(No **lista, long matricula, float n1, float n2){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->matricula = matricula;
        novo->n1 = n1;
        novo->n2 = n2;
        novo->media = (n1+n2)/2;
        novo->proximo = *lista;
        *lista = novo;
    }
    else
        printf("Erro ao alocar memoria!\n");
}

void alterar(No **lista, long matricula, float n1, float n2, No **remover){
    free(remover);
  
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->matricula = matricula;
        novo->n1 = n1;
        novo->n2 = n2;
        novo->media = (n1+n2)/2;
        novo->proximo = *lista;
        *lista = novo;
    }
    else
        printf("Erro ao alocar memoria!\n");
}

No* buscar(No **lista, long matricula){
    No *aux, *no = NULL;

    aux = *lista;
    while(aux && aux->matricula != matricula)
        aux = aux->proximo;
    if(aux)
        no = aux;
    return no;
}

No* remover(No **lista, int matricula){
    No *aux, *remover = NULL;

    if(*lista){
        if((*lista)->matricula == matricula){
            remover = *lista;
            *lista = remover->proximo;        
        }
    }else{
        aux = *lista;
        while(aux->proximo && aux->proximo->matricula!=matricula)
            aux = aux->proximo;
        if(aux->proximo){
            remover = aux->proximo;
            aux->proximo = remover->proximo;        
        }    
    }
    return remover;
}

void imprimir(No *no){
    if(no==NULL){
      printf("Lista vazia");
    }else{ printf("\nLista:\n");
    
    while(no){
        printf("\n");
        printf("Matrícula %ld \n", no->matricula);
        printf("Nota 1 %.1f \n", no->n1);
        printf("Nota 2 %.1f \n", no->n2);
        printf("Média %.1f \n", no->media);
        no = no->proximo;
    }  
    printf("\n\n");
    }  
}

