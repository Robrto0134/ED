#include <iostream>
#include <string.h>
#include "Dados.h"

int menu(){
    int choice;
    system("clear");

    std::cout << "Qual das opções a baixo você desejaria executar?" << std::endl << std::endl;
    std::cout << "1.Adicionar item na ultima posição" << std::endl;
    std::cout << "2.Adicionar item em posição especifica" << std::endl;
    std::cout << "3.Remover item da posição especifica" << std::endl;
    std::cout << "4.Verificar se há algum item" << std::endl;
    std::cout << "5.Verificar se há algum espaço vazio" << std::endl;
    std::cout << "6.Verificar quantidade de itens" << std::endl;
    std::cout << "7.Mostrar todos os dados" << std::endl;
    std::cout << "8.Verificar item da posição especifica" << std::endl;
    std::cout << "9.Modificar item da posição especifica" << std::endl << std::endl;

    std::cin >> choice;

    return choice;
}

int main(void){
    Dados *d = new Dados();
    int hold, info;
    std::string resposta;

    do{
        switch(menu()){
            case(1):
                std::cout << "Digite o item." << std::endl;
                std::cin >> info;
                d->adicionarFinal(info);
                break;
            case(2):
                std::cout << "Qual posição?" << std::endl;
                std::cin >> hold;
                std::cout << "Digite o item." << std::endl;
                std::cin >> info;
                d->adicionaAonde(hold, info);
                break;
            case(3):
                std::cout << "Qual a posição?" << std::endl;
                std::cin >> hold;
                d->removeAonde(hold);
                break;
            case(4):
                if(d->verificaVazia())
                    std::cout << "Não há itens alocados" << std::endl;

                else
                    std::cout << "Há itens alocados" << std::endl;
                break;
            case(5):
            if(d->verificaCheia())
                    std::cout << "Não há espaço vazio" << std::endl;

                else
                    std::cout << "Há espaço vazio" << std::endl;
                break;
            case(6):
                std::cout << "Há " << d->verificarTam() << " alocados" << std::endl;
                break;
            case(7):
                d->printAll();
                break;
            case(8):
                std::cout << "Qual a posição você deseja verificar" << std::endl;
                std::cin >> hold;
                d->printPos(hold);
                break;
            case(9):
                std::cout << "Qual a posição você deseja modificar" << std::endl;
                std::cin >> hold;
                std::cout << "Para para qual você deseja altertar?" << std::endl;
                std::cin >> info;
                d->modificar(hold, info);
        }
        std::cout << "Deseja continuar? (sim ou nao)" << std::endl;
        std::cin >> resposta;
    }while(resposta == "sim");

        
    return 0;
}
