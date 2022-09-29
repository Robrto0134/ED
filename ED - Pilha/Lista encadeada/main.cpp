#include "Pilha.h"
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
    Pilha *p = new Pilha();

    do{
        switch(menu()){
            case(1):
                std::cout << "Digite o item." << std::endl;
                std::cin >> info;
                p->empilhar(info);
                break;
            case(2):
                if(p->verificarVazia())
                    std::cout << "A pilha já está vazia" << std::endl;
                else{
                    std::cout << "O item do topo da pilha foi excluido." << std::endl;
                    p->removerTopo();
                }
                break;
            case(3):
                if(p->verificarVazia())
                    std::cout << "A pilha está vazia." << std::endl;
                else
                    std::cout << "A pinha não está vazia." << std::endl;
                break;
            case(4):
                if(p->verificarVazia())
                    std::cout << "A pilha está vazia." << std::endl;
                else
                    std::cout << "O item no topo da pilha é " << p->imprimirTopo() << std::endl;
                break;
            case(5):
                p->empilhar(2);
                p->empilhar(4);
                p->empilhar(8);
                p->empilhar(16);
        }
        std::cout << "Deseja continuar? (sim ou nao)" << std::endl;
        std::cin >> resposta;
    }while(resposta == "sim");
    return 0;
}
