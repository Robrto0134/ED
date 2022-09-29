#ifndef PILHA_H
#define PILHA_H

#include "Dados.h"

class Pilha{
    private:
        int tam;
        Dados *last;

    public:
        virtual ~Pilha();
        Pilha();

        void empilhar(int data);
        void removerTopo();
        int imprimirTopo();
        bool verificarVazia();
        int retornarTam();
};

#endif