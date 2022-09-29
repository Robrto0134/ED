#include "Pilha.h"
#include <stdlib.h>

    Pilha::~Pilha(){ }

    Pilha::Pilha(){
        tam = 0;
        last = nullptr;
    }

    void Pilha::empilhar(int data){
        Dados *d = (Dados *) malloc(sizeof(Dados));

        d->setInfo(data);
        d->setBelow(nullptr);

        if(tam != 0){
            d->setBelow(last);
        }
        last = d;
        tam++;
    }

    void Pilha::removerTopo(){
        Dados *temp = last;
        last = last->getBelow();
        free(temp);
        tam--;
    }

    int Pilha::imprimirTopo(){
        return last->getInfo();
    }

    int Pilha::retornarTam(){
        return tam;
    }

    bool Pilha::verificarVazia(){
        if(tam == 0)
            return true;
        else
            return false;
    }