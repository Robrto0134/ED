#include <iostream>
#include "Dados.h"

    Dados::~Dados(){ }

    Dados::Dados(){
        info[0] = 0;
        tamMax = 10;
        tamAgr = 0;
    }

    void Dados::adicionarFinal(int data){
        if(tamAgr == tamMax)
            std::cout << "ERRO: Tamanho máximo alcançado." << std::endl;
        else{
            info[tamAgr] = data;
            tamAgr++;
        }
    }

    bool Dados::verificaVazia(){
        if(tamAgr == 0)
            return true;
        else
            return false;
    }

    bool Dados::verificaCheia(){
        if(tamAgr == tamMax)
            return true;
        else
            return false;
    }

    int Dados::verificarTam(){
        return tamAgr;
    }
    
    void Dados::printPos(int pos){
        if(pos <= 0 || pos > tamAgr)
            std::cout << "ERRO: Posição indisponível" << std::endl;
        
        else
            std::cout << "Na posição " << pos << " tem o valor " << info[pos-1] << std::endl;
    }

    void Dados::adicionaAonde(int pos, int data){
        if(tamAgr == tamMax)
            std::cout << "ERRO: Tamanho máximo alcançado." << std::endl;
        
        else{
            if(pos <= 0 || pos > tamAgr+1)
                std::cout << "ERRO: Posição indisponível." << std::endl;
            
            else{
                for(int i = (tamAgr); i > (pos-1); i--)
                info[i] = info[i-1];
                info[pos-1] = data;
                tamAgr = tamAgr+1;
            }
        }
    }

    void Dados::removeAonde(int pos){
        if(pos <= 0 || pos > tamAgr)
            std::cout << "ERRO: Posição indisponível" << std::endl;
        
        else{
            for(int i = (pos-1); i < (tamAgr-1); i++)
                info[i] = info[i+1];
            
            tamAgr = tamAgr-1;
        }
    }

    void Dados::printAll(){
        for(int i = 0; i < tamAgr; i++)
            std::cout << info[i] << "   ";
        std::cout << std::endl;
    }

    void Dados::modificar(int pos, int info){
        if(pos <= 0 || pos > tamAgr){
            std::cout << "ERRO: Posição indisponível" << std::endl;
        }
        else
        this->info[pos-1] = info;
    }