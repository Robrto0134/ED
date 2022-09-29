#include "Dados.h"
#include <iostream>

    Dados::~Dados() { }

    Dados::Dados(){
        tamAtual = 0;
    }

    void Dados::empilhar(int data){
        if(tamAtual < 9){
            d[tamAtual] = data;
            tamAtual++;
        }else
            std::cout << "Vetor cheio, não há espaço" << std::endl;
    }

    void Dados::remover(){
        tamAtual--;
        d[tamAtual] = '\0';
    }

    int Dados::retornarTopo(){
        return d[tamAtual - 1];
    }

    int Dados::retornarTam(){
        return tamAtual;
    }

    bool Dados::verificarVazia(){
        if (tamAtual == 0)
            return true;
        else
            return false;        
    }