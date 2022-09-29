#include "Dados.h"
#include <iostream>

int menu(){
    int choice;
    system("clear");

    std::cout << "Qual das opções a baixo você desejaria executar?" << std::endl << std::endl;
    std::cout << "1.Adicionar item no topo da pilha" << std::endl;
    std::cout << "2.Remover item do topo da pilha" << std::endl;
    std::cout << "3.Verificar se a pilha está vazia" << std::endl;
    std::cout << "4.Imprimir item no topo da pilha" << std::endl;
    std::cout << "5.Iniciar valores de teste" << std::endl;

    std::cin >> choice;

    return choice;
}

int main(int argc, char **argv){
    int info;
    std::string resposta;
    Dados *d = new Dados();

    do{
        switch(menu()){
            case(1):
                std::cout << "Digite o item." << std::endl;
                std::cin >> info;
                d->empilhar(info);
                break;
            case(2):
                if(d->verificarVazia())
                        std::cout << "A pilha está vazia." << std::endl;
                else{
                    std::cout << "O item foi removido." << std::endl;
                    d->remover();
                }
                break;
            case(3):
                if(d->verificarVazia())
                    std::cout << "A pilha está vazia." << std::endl;
                else
                    std::cout << "A pilha não está vazia." << std::endl;
                break;
            case(4):
                if(d->verificarVazia())
                    std::cout << "A pilha está vazia." << std::endl;
                else
                    std::cout << "O item no topo da pilha é " << d->retornarTopo() << std::endl;
                    break;
            case(5):
                d->empilhar(3);
                d->empilhar(9);
                d->empilhar(27);
                d->empilhar(81);
            }
        std::cout << "Deseja continuar? (sim ou nao)" << std::endl;
        std::cin >> resposta;
    }while(resposta == "sim");
    return 0;
}