#include <stdio.h>
#include <stdlib.h>

typedef struct knot{
    char cadeia;
    struct knot *prox;
}No;


int igual(No* l1, No* l2)
{
    No *aux = l1;
    No *aux2 = l2;

    while(aux != NULL || aux2 != NULL){
        //printf("%c", aux->cadeia);
        //printf("%c ", aux2->cadeia);
        
        if((aux != NULL? aux->cadeia : 0) != (aux2 != NULL? aux2->cadeia : 0)) {
            return 0;
        }
        if (aux != NULL) aux = aux->prox;
        if (aux2 != NULL) aux2 = aux2->prox;     
            

    }
    
    
    return 1;
}



No* geraLista(const char* s, int tam) {
    if (tam == 0) return NULL;
    
    No *inicio, *fim;  

    for (int i = 0; i < tam; i++) {
        No* aux = (No*)malloc(sizeof(No));
        aux->cadeia = s[i];
        aux->prox = NULL;
        
        if(i == 0) {
            inicio = aux;
            fim = inicio;
        }
        
        fim->prox = aux;
        fim = fim->prox;
    }
    
    return inicio;
}





int main(){
    

    
    No *l1 = geraLista("Murilo", 6);
    No *l2 = geraLista("Muril", 5);
    
    int eigual = igual(l1, l2);

    if(eigual) {
        printf(" is igual");
    }

    else{
        printf(" nao is ingual");
    }
    
    
    return 0;
}