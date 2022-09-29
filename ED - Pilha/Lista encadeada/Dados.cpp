#include "Dados.h"

    Dados::~Dados(){ }

    Dados::Dados(){
        info = 0;
        below = nullptr;
    }

    void Dados::setInfo(int data){
        info = data;
        below = nullptr;
    }
    void Dados::setBelow(Dados *old){
        below = old;
    }

    int Dados::getInfo(){
        return info;
    }
    Dados* Dados::getBelow(){
        return below;
    }